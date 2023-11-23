cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(Vogel VERSION 1.0)

add_library(table STATIC src/table.cpp)
add_library(plan STATIC src/plan.cpp)
add_library(resources STATIC src/resources.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main plan table resources)