project(map_test)

add_executable(${PROJECT_NAME} map_test.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)

add_test(
    NAME map_info_test
    COMMAND $<TARGET_FILE:${PROJECT_NAME}>
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)