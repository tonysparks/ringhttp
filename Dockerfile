# docker build -t ring .

FROM ubuntu:24.04 AS builder

RUN apt-get update && apt-get install -y --no-install-recommends \
        gcc \
        git \
        liburing-dev \
        libcurl4-openssl-dev \
        ca-certificates \
    && rm -rf /var/lib/apt/lists/*

# Fetch litac compiler and stdlib
RUN git clone https://github.com/tonysparks/litac-lang /opt/litac-lang
RUN gcc -O2 -o /usr/local/bin/litac /opt/litac-lang/bootstrap/litac_linux.c \
        -D_CRT_SECURE_NO_WARNINGS -D_DEFAULT_SOURCE \
        -I/opt/litac-lang/include \
        -I/opt/litac-lang/stdlib/std/http/libcurl/include \
        -L/opt/litac-lang/lib \
        -lm -lrt -lpthread -lcurl

ENV LITAC_HOME=/opt/litac-lang

# Fetch the litac liburing bindings package
# RUN git clone https://github.com/tonysparks/liburing /opt/litac-liburing

# Copy and build the project
WORKDIR /build
COPY . .

RUN litac install && litac build

# ── runtime ──────────────────────────────────────────────────────────────────
FROM ubuntu:24.04

RUN apt-get update && apt-get install -y --no-install-recommends \
        liburing2 \
        curl \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY --from=builder /build/bin/ring ./ring
COPY --from=builder /build/bin/static/ ./static/

EXPOSE 8080
CMD ["/app/ring"]
