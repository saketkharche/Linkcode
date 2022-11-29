cmake_minimum_required(VERSION 3.22)
project(Bank_Management_System C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Bank_Management_System
        "Bank management System.c"
        bank.c
        "version 01 bank system .c"
        "version 02 Bank System.c")
