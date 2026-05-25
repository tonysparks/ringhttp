#!/bin/bash
# Build and run HTTP/1.1 RFC conformance tests against ringhttp.
# Usage: ./run_h1spec.sh [--no-cache]
#
# Requires --security-opt seccomp=unconfined for io_uring syscalls.
# Exit code mirrors the test runner: 0 = all passed, non-zero = failures.

set -euo pipefail

IMAGE=ring-h1spec
NO_CACHE=

if [[ "${1:-}" == "--no-cache" ]]; then
    NO_CACHE="--no-cache"
fi

echo "==> Building h1spec image..."
docker build $NO_CACHE -f Dockerfile.h1spec -t "$IMAGE" .

echo "==> Running h1spec..."
docker run --rm --security-opt seccomp=unconfined "$IMAGE" /app/entrypoint.sh
