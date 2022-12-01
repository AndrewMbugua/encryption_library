cmake_minimum_required(VERSION 3.23)
project(encryption_library C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(encryption_library
        1-bit-counter.c
        custom_crypto_lib.h
        main.c
        one_time_pad.c
        randomness.c)
