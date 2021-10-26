# Check if glfw submodule is installed
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/source/external/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The glfw submodule was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

add_subdirectory(glfw)

target_include_directories(${PROJECT_NAME} PUBLIC glfw/include)

target_link_directories(${PROJECT_NAME} PRIVATE glfw/src)

target_link_libraries(${PROJECT_NAME} glfw)