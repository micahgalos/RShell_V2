cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(googletest)

set(SOURCE_FILES main.cpp)
set(TEST_FILES ./test/unit_test.cpp)

add_executable(rshell
    ${SOURCE_FILES}
)

add_executable(test
    ${TEST_FILES}
)

target_link_libraries(test gtest)
target_compile_definitions(test PRIVATE gtest_disable_pthreads=ON)