cmake_minimum_required(VERSION 3.14)
project(Network)

set(CMAKE_CXX_STANDARD 14)

add_executable(Network main.cpp AbstactSocket.cpp AbstactSocket.h UdpSocket.cpp UdpSocket.h)