cmake_minimum_required(VERSION 3.23.2)

project(FEX11 VERSION 1.0.0)

add_compile_options(-Wall -Wextra -pedantic)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin/")
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.c")
add_executable(fex11 ${SOURCES})

target_include_directories(fex11 PUBLIC headers)
target_link_libraries(fex11 -lX11 -lXpm)