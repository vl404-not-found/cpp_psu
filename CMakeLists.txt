cmake_minimum_required(VERSION 3.15)
project(cpp_psu)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

add_executable(cpp_psu main.cpp lab5/main.h lab5/main.cpp lab5/ui_mainwindow.cpp lab5/ui_mainwindow.h lab5/mainwindow.ui)


target_link_libraries(cpp_psu PRIVATE Qt5::Widgets)