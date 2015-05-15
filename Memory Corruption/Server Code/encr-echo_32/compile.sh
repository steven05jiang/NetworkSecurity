#!/bin/bash

g++ -Wall -pipe -O0 -ggdb -std=c++11 -fPIE -fPIC -fno-stack-protector -m32 -DPROJECT_NAME=\"stack\" -DPROJECT_VERSION=\"v0.1-dev\" src/main.cpp /usr/local/lib/libboost_system.a /usr/local/lib/libboost_filesystem.a /usr/local/lib/libboost_program_options.a -o out/Default/stack
