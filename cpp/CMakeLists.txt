cmake_minimum_required(VERSION 3.14)

project(cs-problems)

add_subdirectory(sorting)

add_executable(cs-problems main.cpp)

target_link_libraries(cs-problems libsorting)