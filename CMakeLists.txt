cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Room.h Mapsite.h Direction.h Wall.h Door.h Maze.h MazeGame.cpp)