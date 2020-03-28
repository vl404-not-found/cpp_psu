cmake_minimum_required(VERSION 3.15)
project(cpp_psu)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

file(GLOB all_files_SRC
        "main.cpp"
        "lab*/*.cpp"
        "lab*/*.h"
        "lib/*.h"
        "lib/*.cpp"
        )

add_executable(cpp_psu ${all_files_SRC})


target_link_libraries(cpp_psu PRIVATE Qt5::Widgets)

