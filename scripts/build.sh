#!/usr/bin/env bash

cd "$(dirname "$( dirname "$(realpath "$0")" )")" || exit 1

mkdir -p build || exit 1
cd build || exit 1

cmake -G=Ninja .. -D CMAKE_BUILD_TYPE=Release || exit 1
ninja || exit 1
