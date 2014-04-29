#! /usr/bin/env bash

# Install the latest Clang
wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key|sudo apt-key add -
echo "deb http://llvm.org/apt/wheezy/ llvm-toolchain-wheezy main" | sudo tee -a /etc/apt/sources.list
echo "deb-src http://llvm.org/apt/wheezy/ llvm-toolchain-wheezy main" | sudo tee -a /etc/apt/sources.list
apt-get update

apt-get install -y clang-3.5 lldb-3.5

# Install libc++
apt-get install -y subversion
svn co http://llvm.org/svn/llvm-project/libcxx/trunk libcxx
mkdir libc++ 
cd libc++
CC=clang CXX=clang++ cmake -G "Unix Makefiles" -DLIBCXX_CXX_ABI=libstdc++ -DLIBCXX_LIBSUPCXX_INCLUDE_PATHS="/usr/include/c++/4.7/;/usr/include/c++/4.7/x86_64-linux-gnu/" -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr ../libcxx
make
make install
cd ..


# Get C++ development tools
apt-get install -y cmake
apt-get install -y libboost-all-dev

# Get an editor
apt-get install -y vim