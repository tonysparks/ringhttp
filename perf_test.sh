#!/bin/bash

valgrind --tool=callgrind ./bin/ring

wrk -t12 -c200 -d30s http://localhost:8080/echo?hello=world

./bombardier --connections=50 -l -k -n 1000 http://localhost:8080/static/index.html


./bombardier --http1 --connections=250 -l -k -n 2000 http://localhost:8080/static/index.html