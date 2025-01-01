Ring-Http
==
An HTTP server using `io_uring` written purely in [LitaC](https://github.com/tonysparks/litac-lang).  This is still in heavy development and is not production quality - this was more for fun than for actual use (at least for now).

Features/TODO
==
* ✅ Multi-part support
* ✅ Transfer-Encoding: Chunked
    * ✅ From Request
    * ✅ From Response
* ❌ Transfer-Encoding: Gzip
* ❌ Transfer-Encoding: Deflate
* ✅ Form URL Encoded bodies
* ✅ Path Values
* ✅ Path Templates
* ✅ Query Params
* ✅ Headers
* ✅ Serve static files
* ✅ Connection Keep-Alive (with timeouts)
* ✅ Configurable max request sizes
* ❌ Currently all requests are given max amount of memory - split into segments: static and dynamic to minimize overall memory footprint
* ❌ Clean handling of Out of Memory
    * ❌ OOM for a request
    * ❌ OOM for the server
* ✅ ~65K Request/Second on single instance (Request Kind: parse Query Params and echo back in JSON on: CPU: Ryzen 5 2600 RAM: 16 GiB)
* ❌ ~100K Request/Second on single instance (Request Kind: parse Query Params and echo back in JSON)
* ❌ Do performance tuning
* 🔧 Client API
    * ✅ Register routes handlers
    * ✅ Register routes with path templates
    * ✅ Allow for global server error handler
    * ✅ Allow for global 404 handler
    * ✅ Allow for setting raw body contents
    * ✅ Allow for chunked replies (via `Stream`)
    * ✅ Allow for specifying headers
    * ❌ API for specifying content-type (`response.json(..)` `response.html(..)`, etc.)
    * ❌ Template engine integration (mustache? custom?)
* ❌ WebSocket
* ❌ Test Suite

Building
==

This has only been tested on Ubuntu 22.04

Build
```
litac -pkg-build
```

Build and Run
```
litac -pkg-build -run
```
Run executable
```
./bin/ring
```
