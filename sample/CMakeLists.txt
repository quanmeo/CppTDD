cmake_minimum_required(VERSION 3.15)
project(tdd_fizzbuzz)

# Generate the library libfizzbuzz
add_library(libfizzbuzz src/fizzbuzz.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# For googletest
enable_testing()
add_subdirectory(tests)

add_executable(tdd_fizzbuzz_bin src/main.cpp)
target_link_libraries(tdd_fizzbuzz_bin libfizzbuzz)