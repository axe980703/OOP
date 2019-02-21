cmake_minimum_required(VERSION 3.10)
project(OOP)

set(CMAKE_CXX_STANDARD 11)

add_executable(OOP main.cpp Figure.h Circle.h circle.cpp Square.h square.cpp Vector.h)
