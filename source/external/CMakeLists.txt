add_subdirectory(glfw)

target_include_directories(${PROJECT_NAME} PUBLIC glfw/include)

target_link_directories(${PROJECT_NAME} PRIVATE glfw/src)

target_link_libraries(${PROJECT_NAME} glfw)