cmake_minimum_required(VERSION 3.15)
project(CPrime C)

set(CMAKE_C_STANDARD 99)
add_executable(CPrime 实例018.判断三角形的类型/main.c 实例019.直接插入排序/main.c)
target_link_libraries(CPrime m)
