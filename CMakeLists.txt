cmake_minimum_required(VERSION 3.10)
project(searchAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(searchAlgorithms main.cpp secuentialSearch/secuentialSearch.cpp secuentialSearch/secuentialSearch.h binarySearch/binarySearch.cpp binarySearch/binarySearch.h)