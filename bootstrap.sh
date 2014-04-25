#! /usr/bin/env bash

# Install the latest Clang
wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key|sudo apt-key add -
echo "deb http://llvm.org/apt/wheezy/ llvm-toolchain-wheezy main" | sudo tee -a /etc/apt/sources.list
echo "deb-src http://llvm.org/apt/wheezy/ llvm-toolchain-wheezy main" | sudo tee -a /etc/apt/sources.list
apt-get update

apt-get install -y clang-3.4

# Get C++ development tools
apt-get install -y cmake

# Get an editor
apt-get install -y vim