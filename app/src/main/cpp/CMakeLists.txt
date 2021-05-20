
cmake_minimum_required(VERSION 3.18.1)


project("vaca")


include_directories(${CMAKE_SOURCE_DIR}/c9x-complex)
file(GLOB_RECURSE c9x_src ${CMAKE_SOURCE_DIR}/*.c)
add_library(c9x ${c9x_src})

add_library(
        vaca-lib
        SHARED
        vaca.cpp
)


find_library(
        log-lib


        log)


target_link_libraries(
        vaca-lib
        c9x
        ${log-lib})