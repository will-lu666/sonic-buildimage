FROM docker-base

## Make apt-get non-interactive
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update

## Pre-install the fundamental packages
RUN apt-get update \
 && apt-get -y install  \
    net-tools

COPY deps /deps

ENTRYPOINT service rsyslog start    \
    && sleep 5 && service sswsyncd start       \
    && /bin/bash
