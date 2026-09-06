cmake_minimum_required(VERSION 3.20)

project(ProductionPractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
)

# Для Microsoft Visual C++ сохраняем стандартный runtime.
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(data_structures
    src/Queue.cpp
    src/Heap.cpp
    src/BinaryTree.cpp
)

target_include_directories(data_structures PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(unit_tests
    tests/QueueTest.cpp
    tests/HeapTest.cpp
    tests/BinaryTreeTest.cpp
)

target_link_libraries(unit_tests PRIVATE
    data_structures
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
