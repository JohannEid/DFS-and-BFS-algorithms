cmake_minimum_required(VERSION 3.6)
project(labyrinthe2016)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        case.cpp
        case.h
        header.h
        lab.txt
        labyrinthe.cpp
        labyrinthe.h
        main.cpp
        noeud.cpp
        noeud.h)

add_executable(labyrinthe2016 ${SOURCE_FILES})