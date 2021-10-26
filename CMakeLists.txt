cmake_minimum_required(VERSION 3.16)

# Set project name and version
project(template-CppCmake VERSION 0.1.0)

# Check if git is used
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")

# Update submodules if needed
    option(GIT_SUBMODULE_UPDATE "Check submodules during build" ON)
    if(GIT_SUBMODULE_UPDATE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} source/main.cpp)
add_subdirectory(source)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
