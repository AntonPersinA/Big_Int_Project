cmake_minimum_required(VERSION 3.27)
project(BI_Project C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -O3")

add_executable(main_BI
        main2.c
        big_int/big_int.c
        test/test.c
        lib/lib.c
)
target_link_libraries(main_BI m)

add_executable(test
        main2.c
        big_int/big_int.c
        test/test.c
        lib/lib.c
)
target_link_libraries(test m)