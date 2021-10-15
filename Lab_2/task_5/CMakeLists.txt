cmake_minimum_required(VERSION 3.17)
project(task_5 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(task_5
        Queue.c
        Queue.h
        test_quque.c)
