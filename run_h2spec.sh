#!/bin/bash
# Build and run the h2spec conformance suite against ringhttp.
# Usage: ./run_h2spec.sh [--no-cache]
#
# Requires --security-opt seccomp=unconfined for io_uring syscalls.
# Exit code mirrors h2spec: 0 = all passed, non-zero = failures.

set -euo pipefail

IMAGE=ring-h2spec
NO_CACHE=

if [[ "${1:-}" == "--no-cache" ]]; then
    NO_CACHE="--no-cache"
fi

echo "==> Building h2spec image..."
docker build $NO_CACHE -f Dockerfile.h2spec -t "$IMAGE" .

echo "==> Running h2spec..."
docker run --rm --security-opt seccomp=unconfined "$IMAGE" /app/entrypoint.sh
