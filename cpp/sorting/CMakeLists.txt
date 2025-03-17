cmake_minimum_required(VERSION 3.14)

project(sorting)

file(GLOB headers "*.h")
file(GLOB sources "*.cpp")

add_library(libsorting ${headers} ${sources})

target_include_directories(libsorting PUBLIC ${CMAKE_CURRENT_LIST_DIR})