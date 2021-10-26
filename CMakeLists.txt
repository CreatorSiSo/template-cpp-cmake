cmake_minimum_required(VERSION 3.16)

# Set project name and version
project(template-CppCmake VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} source/main.cpp)
add_subdirectory(source)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
