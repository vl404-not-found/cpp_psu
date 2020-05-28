#cmake_minimum_required(VERSION 3.15)
#project(cpp_psu)
#
#set(CMAKE_CXX_STANDARD 14)
#
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

#file(GLOB all_files_SRC
#        "main.cpp"
#        "lab5/*.cpp"
#        "lab5/*.h"
#        "lib/*.h"
#        "lib/*.cpp"
#        )
#file(GLOB all_files_SRC
#        "main.cpp"
#        "lab*/*.cpp"
#        "lab*/*.h"
#        "lib/*.h"
#        "lib/*.cpp"
#        )

#add_executable(cpp_psu ${all_files_SRC})


#target_link_libraries(cpp_psu PRIVATE Qt5::Widgets)
#


cmake_minimum_required(VERSION 3.16)
project(cpp_psu)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Qt5Widgets REQUIRED)

add_executable(cpp_psu
        projectx/main.cpp
        projectx/mainwindow.cpp
        projectx/mainwindow.h
        projectx/mainwindow.ui
        projectx/customlist.cpp
        projectx/customlist.h
        projectx/Vertex.cpp
        projectx/Vertex.h)

target_link_libraries(cpp_psu Qt5::Widgets)
