cmake_minimum_required(VERSION 3.12)
project(bsd_tcp C)

set(CMAKE_C_STANDARD 11)

add_executable(bsd_tcp main.c examples/test.c examples/mbuf.h examples/pcb.h)