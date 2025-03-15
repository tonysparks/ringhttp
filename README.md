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
* ✅ ~311K Request/Second on single instance (Request Kind: parse Query Params and echo back in JSON on: CPU: Ryzen 5 2600 RAM: 16 GiB)
    * ✅ Support multi-threading
* ❌ Do performance tuning
    * ❌ SIMD for HTTP parsing
    * ❌ Explore batching opportunities
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
* ✅ WebSocket
* ❌ Test Suite

Building
==

This has only been tested on Ubuntu 22.04

__Setup and Build__

```shell
# Download the liburing litac bindings dependency (this only needs to be done once)
litac -pkg-install

# Build the project
litac -pkg-build
```

__Build and Run__
```shell
# Build the project and run the executable
litac -pkg-build -run
```

__Run executable__
```shell
# Run the generated executable without litac
./bin/ring
```

Performance
==

__Host machine__
AMD Ryzen 5 2600 (6 cores) with 16 GiB RAM

__Ring Configuration__
Threads: 16
IO_uring Queue Depth: 64
Max Pool Size: 512
Log: Disabled

__Results__
2 threads/20 connections: 151978.76 Request Per Second
16 threads/200 connections: 311170.48 Request Per Second

```
tony@tony-ubuntu:~/projects/ring-http$ wrk -t2 -c20 -d30s --timeout 1s http://localhost:8080/echo?hello=world
Running 30s test @ http://localhost:8080/echo?hello=world
  2 threads and 20 connections
  Thread Stats   Avg      Stdev     Max   +/- Stdev
    Latency    88.33us  104.06us   5.13ms   99.28%
    Req/Sec    76.39k     1.73k   80.87k    68.50%
  4559696 requests in 30.00s, 560.95MB read
Requests/sec: 151978.76
Transfer/sec:     18.70MB
tony@tony-ubuntu:~/projects/ring-http$ wrk -t16 -c200 -d30s --timeout 1s http://localhost:8080/echo?hello=world
Running 30s test @ http://localhost:8080/echo?hello=world
  16 threads and 200 connections
  Thread Stats   Avg      Stdev     Max   +/- Stdev
    Latency   670.04us  725.95us  26.26ms   90.12%
    Req/Sec    19.55k     1.37k   36.09k    76.19%
  9341785 requests in 30.02s, 1.12GB read
Requests/sec: 311170.48
Transfer/sec:     38.28MB
```
