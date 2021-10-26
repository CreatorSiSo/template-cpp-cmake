add_subdirectory(log)

target_include_directories(${PROJECT_NAME} PUBLIC log)

target_link_directories(${PROJECT_NAME} PUBLIC log)

target_link_libraries(${PROJECT_NAME} log)