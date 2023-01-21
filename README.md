[![CI-Release](https://github.com/wiiu-env/CURLWrapperModule/actions/workflows/ci.yml/badge.svg)](https://github.com/wiiu-env/CURLWrapperModule/actions/workflows/ci.yml)

Aroma Module that (hopefully) exports all functions of libcurl (Currently targeting: curl 7.84.0)

## Usage
(`[ENVIRONMENT]` is a placeholder for the actual environment name.)

1. Copy the file `CURLWrapperModule.wms` into `sd:/wiiu/environments/[ENVIRONMENT]/modules`.
2. Use [libcurlwrapper](https://github.com/wiiu-env/libcurlwrapper)

## Building using the Dockerfile

It's possible to use a docker image for building. This way you don't need anything installed on your host system.

```
# Build docker image (only needed once)
docker build . -t curlwrappermodule-builder

# make 
docker run -it --rm -v ${PWD}:/project curlwrappermodule-builder make

# make clean
docker run -it --rm -v ${PWD}:/project curlwrappermodule-builder make clean
```

The bundled Dockerfile creates a module with this version: `libcurl/7.84.0 mbedTLS/2.28.1 zlib/1.2.11`

## Format the code via docker

`docker run --rm -v ${PWD}:/src wiiuenv/clang-format:13.0.0-2 -r ./src -i`
