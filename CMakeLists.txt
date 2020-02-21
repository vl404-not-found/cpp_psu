cmake_minimum_required(VERSION 3.15)
project(cpp_psu)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_psu main.cpp lab2/main.cpp lab2/main.h lab2/form.cpp lib/lib.cpp lib/lib.h lab2/mean.cpp)