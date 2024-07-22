cmake_minimum_required(VERSION 3.5.0)


add_library(include stack.cpp)
target_include_directories(include PUBLIC ./)
