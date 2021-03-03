cmake_minimum_required(VERSION 3.19)
project(noise_generator)

set(CMAKE_CXX_STANDARD 17)

find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIR})


add_executable(noise_generator main.cpp)

target_link_libraries(noise_generator ${PNG_LIBRARY})