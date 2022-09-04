cmake_minimum_required(VERSION 3.12)
project(MyGame)

# C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include engine
add_subdirectory(libs/yak)

# add our source
add_executable(game
	src/main.cpp
 )

# Reference engine
target_link_libraries(game yak)