cmake_minimum_required(VERSION 3.16)
project(cpp_psu)

file(GLOB all_files_SRC
        main.cpp
        other/test.h
        term_3/lab_4/*.cpp
        term_3/lab_4/*.h)


set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(Qt5 COMPONENTS Widgets REQUIRED)

#find_package(Qt5Widgets REQUIRED)

add_executable(cpp_psu ${all_files_SRC})

#target_link_libraries(cpp_psu Qt5::Widgets)
