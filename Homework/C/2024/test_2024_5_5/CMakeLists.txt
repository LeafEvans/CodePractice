cmake_minimum_required(VERSION 3.26.0)
project(test_2024_5_5 VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(test_2024_5_5 main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
