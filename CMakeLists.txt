cmake_minimum_required(VERSION 3.8)
project(virus)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        src/main.cpp
        src/RandomNumberGenerator.cpp
        src/RandomNumberGenerator.h
        src/Application.cpp
        src/Application.h
        src/Model.cpp
        src/Model.h
        src/Statistics.cpp
        src/Statistics.h
        src/Computer.cpp
        src/Computer.h
)
add_executable(virus ${SOURCE_FILES})