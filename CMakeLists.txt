cmake_minimum_required(VERSION 3.8)
project(virus)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_FILES src/RandomNumberGenerator.cpp
                 src/RandomNumberGenerator.h
                 src/Model.cpp
                 src/Model.h
                 src/Computer.cpp
                 src/Computer.h
                 src/ResultWriter.cpp
                 src/ResultWriter.h
	         src/Simulator.cpp
	         src/Simulator.h
	         src/Scenario.cpp
	         src/Scenario.h)

add_executable(virus src/main.cpp ${SOURCE_FILES})
add_executable(tests src/test.cpp ${SOURCE_FILES})
