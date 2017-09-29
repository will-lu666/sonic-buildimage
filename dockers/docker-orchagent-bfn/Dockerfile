FROM docker-config-engine

## Make apt-get non-interactive
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update

RUN apt-get install -f -y ifupdown arping libdbus-1-3 libdaemon0 libjansson4

## Install redis-tools dependencies
## TODO: implicitly install dependencies
RUN apt-get -y install libjemalloc1

COPY \
debs/libnl-route-3-200_3.2.27-1_amd64.deb debs/libnl-genl-3-200_3.2.27-1_amd64.deb debs/libnl-nf-3-200_3.2.27-1_amd64.deb debs/libhiredis0.13_0.13.3-2_amd64.deb debs/libnl-3-200_3.2.27-1_amd64.deb debs/libnl-cli-3-200_3.2.27-1_amd64.deb debs/libswsscommon_1.0.0_amd64.deb debs/libsairedis_1.0.0_amd64.deb debs/libsaimetadata_1.0.0_amd64.deb debs/libteam5_1.26-1_amd64.deb debs/swss_1.0.0_amd64.deb debs/redis-tools_3.2.4-1~bpo8+1_amd64.deb debs/

RUN dpkg -i \
debs/libnl-route-3-200_3.2.27-1_amd64.deb debs/libnl-genl-3-200_3.2.27-1_amd64.deb debs/libnl-nf-3-200_3.2.27-1_amd64.deb debs/libhiredis0.13_0.13.3-2_amd64.deb debs/libnl-3-200_3.2.27-1_amd64.deb debs/libnl-cli-3-200_3.2.27-1_amd64.deb debs/libswsscommon_1.0.0_amd64.deb debs/libsairedis_1.0.0_amd64.deb debs/libsaimetadata_1.0.0_amd64.deb debs/libteam5_1.26-1_amd64.deb debs/swss_1.0.0_amd64.deb debs/redis-tools_3.2.4-1~bpo8+1_amd64.deb 

## Clean up
RUN apt-get clean -y; apt-get autoclean -y; apt-get autoremove -y
RUN rm -rf /debs

COPY ["arp_update", "start.sh", "orchagent.sh", "swssconfig.sh", "/usr/bin/"]
COPY ["supervisord.conf", "/etc/supervisor/conf.d/"]
COPY ["ipinip.json.j2", "/usr/share/sonic/templates/"]
COPY ["mirror.json.j2", "/usr/share/sonic/templates/"]

ENTRYPOINT ["/usr/bin/supervisord"]
