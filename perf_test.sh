#!/bin/bash

./bombardier --connections=50 -l -k -n 1000 http://localhost:8080/static/index.html


./bombardier --http1 --connections=250 -l -k -n 2000 http://localhost:8080/static/index.html