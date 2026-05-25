#!/bin/bash
# Start the ringhttp server, wait for it, run h2spec, propagate exit code.
set -euo pipefail

PORT=9090
WAIT_SEC=30

echo "==> Starting ringhttp on port $PORT..."
/app/ring &
SERVER_PID=$!

echo "==> Waiting for server (up to ${WAIT_SEC}s)..."
for i in $(seq 1 $WAIT_SEC); do
    if nc -z localhost $PORT 2>/dev/null; then
        echo "    Ready after ${i}s"
        break
    fi
    if [ "$i" -eq "$WAIT_SEC" ]; then
        echo "ERROR: server did not start within ${WAIT_SEC}s"
        kill "$SERVER_PID" 2>/dev/null || true
        exit 1
    fi
    sleep 1
done

echo "==> Running h2spec against localhost:$PORT..."
h2spec -h localhost -p "$PORT" --timeout 10
EXIT_CODE=$?

kill "$SERVER_PID" 2>/dev/null || true
echo "==> h2spec exited with code $EXIT_CODE"
exit "$EXIT_CODE"
