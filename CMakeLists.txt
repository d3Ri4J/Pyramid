cmake_minimum_required(VERSION 3.10)
project(Pyramid)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

include_directories(code/header code/languages)

file(GLOB SOURCES "code/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

add_executable(pyramid ${SOURCES})

if(MSVC)

else()
    target_link_options(pyramid PRIVATE -static -static-libgcc -static-libstdc++)
endif()