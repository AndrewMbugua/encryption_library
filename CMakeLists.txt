cmake_minimum_required(VERSION 3.22.1)
project(encryption_library C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(encryption_library
        1-bit-counter.c
        custom_crypto_lib.h
        main.c
        one_time_pad.c
        randomness.c ssl_tls/tls.h ssl_tls/prf.c ssl_tls/encrypted_sockets.c base64_encode.c base64_encode.h ssl_tls/SHA256.c ssl_tls/test.c float_double_to_IEEE-754_format.c)
