cmake_minimum_required(VERSION 3.16)
project(projectx)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Qt5Widgets REQUIRED)

add_executable(projectx main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)

target_link_libraries(projectx Qt5::Widgets)
