cmake_minimum_required(VERSION 3.17)
project(Taller)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(SOURCES
        src/pigment.cpp
        src/print_screen.cpp
)

add_executable(Taller
        main.cpp
        ${SOURCES}
        src/pigment_number.cpp include/pigment_number.h)

add_executable(Test
        test/main.cpp
        ${SOURCES}
        )