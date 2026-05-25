#!/usr/bin/env python3
"""
h1spec_runner.py — HTTP/1.1 RFC 7230/7231 conformance tests for ringhttp.

Exit code: 0 = all passed, 1 = one or more failures.

Usage: h1spec_runner.py [--host HOST] [--port PORT]
"""
import socket
import sys
import time

HOST = "localhost"
PORT = 9090

# Parse --host / --port from argv
_args = sys.argv[1:]
while _args:
    if _args[0] == "--host" and len(_args) > 1:
        HOST = _args[1]; _args = _args[2:]
    elif _args[0] == "--port" and len(_args) > 1:
        PORT = int(_args[1]); _args = _args[2:]
    else:
        _args = _args[1:]

PASS = 0
FAIL = 0


def result(name: str, ok: bool, detail: str = "") -> None:
    global PASS, FAIL
    if ok:
        print(f"  PASS  {name}")
        PASS += 1
    else:
        msg = f": {detail}" if detail else ""
        print(f"  FAIL  {name}{msg}")
        FAIL += 1


def _read_response(sock, method="GET"):
    """Read exactly one HTTP/1.x response from an open socket.

    Returns (status_line, headers, body) where body is bytes.
    headers is a dict with lower-cased keys.
    Pass method="HEAD" so the body is never read (RFC 7230 §3.3).
    """
    raw = b""
    while b"\r\n\r\n" not in raw:
        chunk = sock.recv(4096)
        if not chunk:
            break
        raw += chunk

    sep = raw.find(b"\r\n\r\n")
    head_raw = raw[:sep]
    remainder = raw[sep + 4:]

    lines = head_raw.split(b"\r\n")
    status_line = lines[0].decode("latin-1")
    headers = {}
    for line in lines[1:]:
        if b":" in line:
            k, v = line.split(b":", 1)
            headers[k.strip().lower().decode("latin-1")] = v.strip().decode("latin-1")

    status_code = int(status_line.split(" ")[1]) if " " in status_line else 0

    # RFC 7230 §3.3: no body for HEAD, 1xx, 204, 304
    if method.upper() == "HEAD" or status_code in (204, 304) or 100 <= status_code < 200:
        return status_line, headers, b""

    if "content-length" in headers:
        need = int(headers["content-length"])
        body = remainder
        while len(body) < need:
            chunk = sock.recv(4096)
            if not chunk:
                break
            body += chunk
        return status_line, headers, body[:need]

    if "chunked" in headers.get("transfer-encoding", "").lower():
        body = b""
        buf = remainder
        while True:
            while b"\r\n" not in buf:
                chunk = sock.recv(4096)
                if not chunk:
                    break
                buf += chunk
            size_str, buf = buf.split(b"\r\n", 1)
            size = int(size_str.strip(), 16)
            if size == 0:
                break
            while len(buf) < size + 2:
                chunk = sock.recv(4096)
                if not chunk:
                    break
                buf += chunk
            body += buf[:size]
            buf = buf[size + 2:]
        return status_line, headers, body

    # No framing — read until close
    body = remainder
    while True:
        try:
            chunk = sock.recv(4096)
            if not chunk:
                break
            body += chunk
        except socket.timeout:
            break
    return status_line, headers, body


def connect():
    s = socket.create_connection((HOST, PORT), timeout=5)
    s.settimeout(5)
    return s


def one_shot(req: bytes):
    """Send req on a fresh connection, return (status_line, headers, body)."""
    with connect() as s:
        s.sendall(req)
        return _read_response(s)


# ── Section 1: Status line format (RFC 7230 §3.1.2) ─────────────────────────
print("Section 1: Status line format (RFC 7230 §3.1.2)")

sl, hdrs, body = one_shot(b"GET / HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n")
parts = sl.split(" ", 2)

result("1.1  status line has at least 2 SP-separated tokens", len(parts) >= 2)
result("1.2  HTTP-version is HTTP/1.0 or HTTP/1.1",
       parts[0] in ("HTTP/1.0", "HTTP/1.1") if parts else False)
result("1.3  status code is exactly 3 digits",
       len(parts) > 1 and len(parts[1]) == 3 and parts[1].isdigit())
result("1.4  GET / returns 200",
       parts[1] == "200" if len(parts) > 1 else False)

# ── Section 2: Content framing (RFC 7230 §3.3) ───────────────────────────────
print("\nSection 2: Content-Length / Transfer-Encoding (RFC 7230 §3.3)")

has_cl = "content-length" in hdrs
has_te = "transfer-encoding" in hdrs

result("2.1  response has Content-Length or Transfer-Encoding",
       has_cl or has_te)
result("2.2  Content-Length and Transfer-Encoding are not both present",
       not (has_cl and has_te))

if has_cl:
    try:
        cl = int(hdrs["content-length"])
        result("2.3  Content-Length is a non-negative integer", cl >= 0)
        result("2.4  Content-Length matches actual body length",
               cl == len(body), f"header={cl} body={len(body)}")
    except ValueError:
        result("2.3  Content-Length is a non-negative integer", False, "not an integer")
        result("2.4  Content-Length matches actual body length", False, "unparseable")

# ── Section 3: Host header requirement (RFC 7230 §5.4) ───────────────────────
print("\nSection 3: Host header requirement (RFC 7230 §5.4)")

sl3, _, _ = one_shot(b"GET / HTTP/1.1\r\nConnection: close\r\n\r\n")
code3 = sl3.split(" ")[1] if " " in sl3 else ""
result("3.1  HTTP/1.1 request without Host returns 400",
       code3 == "400", f"got {code3}")

# ── Section 4: HEAD method (RFC 7231 §4.3.2) ─────────────────────────────────
print("\nSection 4: HEAD method (RFC 7231 §4.3.2)")

with connect() as s:
    s.sendall(b"HEAD / HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n")
    sl4, hdrs4, body4 = _read_response(s, "HEAD")

parts4 = sl4.split(" ", 2)
result("4.1  HEAD returns 200", parts4[1] == "200" if len(parts4) > 1 else False)
result("4.2  HEAD response has no body", len(body4) == 0, f"got {len(body4)} bytes")

# HEAD Content-Length should match GET Content-Length
if has_cl and "content-length" in hdrs4:
    result("4.3  HEAD Content-Length equals GET Content-Length",
           hdrs4["content-length"] == hdrs["content-length"],
           f"HEAD={hdrs4['content-length']} GET={hdrs['content-length']}")

# ── Section 5: 404 for unknown resource (RFC 7231 §6.5.4) ───────────────────
print("\nSection 5: 404 Not Found (RFC 7231 §6.5.4)")

sl5, _, _ = one_shot(b"GET /no-such-path HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n")
code5 = sl5.split(" ")[1] if " " in sl5 else ""
result("5.1  unknown path returns 4xx",
       code5.startswith("4"), f"got {code5}")

# ── Section 6: POST method (RFC 7231 §4.3.3) ─────────────────────────────────
print("\nSection 6: POST method (RFC 7231 §4.3.3)")

payload = b"hello"
post_req = (
    b"POST / HTTP/1.1\r\n"
    b"Host: localhost\r\n"
    b"Content-Type: text/plain\r\n"
    b"Content-Length: " + str(len(payload)).encode() + b"\r\n"
    b"Connection: close\r\n"
    b"\r\n" + payload
)
sl6, hdrs6, body6 = one_shot(post_req)
code6 = sl6.split(" ")[1] if " " in sl6 else ""
result("6.1  POST / returns 2xx", code6.startswith("2"), f"got {code6}")

if "content-length" in hdrs6:
    try:
        cl6 = int(hdrs6["content-length"])
        result("6.2  POST response Content-Length matches body",
               cl6 == len(body6), f"header={cl6} body={len(body6)}")
    except ValueError:
        result("6.2  POST response Content-Length matches body", False, "not an integer")

# ── Section 7: HTTP/1.0 compatibility (RFC 7230 §2.6) ────────────────────────
print("\nSection 7: HTTP/1.0 compatibility (RFC 7230 §2.6)")

sl7, _, _ = one_shot(b"GET / HTTP/1.0\r\nHost: localhost\r\n\r\n")
code7 = sl7.split(" ")[1] if " " in sl7 else ""
result("7.1  HTTP/1.0 request gets a valid response",
       code7.startswith("2") or code7.startswith("4"), f"got {code7}")

# ── Section 8: Keep-alive (RFC 7230 §6.3) ─────────────────────────────────────
print("\nSection 8: Keep-alive — two requests on one connection (RFC 7230 §6.3)")

try:
    with connect() as s:
        # First request — no Connection: close so connection stays open
        req_a = b"GET / HTTP/1.1\r\nHost: localhost\r\n\r\n"
        s.sendall(req_a)
        sl_a, hdrs_a, body_a = _read_response(s)
        code_a = sl_a.split(" ")[1] if " " in sl_a else ""

        # Second request on the same socket
        req_b = b"GET / HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n"
        s.sendall(req_b)
        sl_b, _, _ = _read_response(s)
        code_b = sl_b.split(" ")[1] if " " in sl_b else ""

    result("8.1  first pipelined request returns 200", code_a == "200", f"got {code_a}")
    result("8.2  second pipelined request returns 200", code_b == "200", f"got {code_b}")
except Exception as e:
    result("8.1  first pipelined request returns 200", False, str(e))
    result("8.2  second pipelined request returns 200", False, "skipped")

# ── Section 9: Connection: close (RFC 7230 §6.6) ─────────────────────────────
print("\nSection 9: Connection: close (RFC 7230 §6.6)")

try:
    with connect() as s:
        s.sendall(b"GET / HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n")
        sl9, hdrs9, _ = _read_response(s)
        code9 = sl9.split(" ")[1] if " " in sl9 else ""

        # After reading the response the server should close; another recv returns b""
        try:
            leftover = s.recv(4096)
            closed = leftover == b""
        except (ConnectionResetError, OSError):
            closed = True

    result("9.1  Connection: close response is 200", code9 == "200", f"got {code9}")
    result("9.2  server closes connection after Connection: close response", closed)
except Exception as e:
    result("9.1  Connection: close response is 200", False, str(e))
    result("9.2  server closes connection after Connection: close response", False, "skipped")

# ── Summary ───────────────────────────────────────────────────────────────────
print(f"\n{'=' * 60}")
print(f"Results: {PASS} passed, {FAIL} failed")
sys.exit(1 if FAIL > 0 else 0)
