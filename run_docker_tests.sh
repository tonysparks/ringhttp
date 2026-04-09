#!/bin/bash
# Build and run the Linux test suite inside Docker.
# Usage: ./run_docker_tests.sh [--no-cache]
#
# Exit code mirrors the test runner: 0 = all passed, non-zero = failure.
#
# --security-opt seccomp=unconfined is required so that the io_uring
# syscalls (io_uring_setup, io_uring_enter, etc.) are not blocked by
# Docker's default seccomp profile.

set -euo pipefail

IMAGE=ring-test
NO_CACHE=

if [[ "${1:-}" == "--no-cache" ]]; then
    NO_CACHE="--no-cache"
fi

echo "==> Building test image..."
docker build $NO_CACHE -f Dockerfile.test -t "$IMAGE" .

echo "==> Running tests..."
docker run --rm --security-opt seccomp=unconfined "$IMAGE"
