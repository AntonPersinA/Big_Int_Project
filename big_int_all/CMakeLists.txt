cmake_minimum_required(VERSION 3.27)
project(BI_Project C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -O3")

add_executable(big_int
        main2.c
        big_int/big_int.c
        test/test.c
        lib/lib.c
)
target_link_libraries(big_int m)