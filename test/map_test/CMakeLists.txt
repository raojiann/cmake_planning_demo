project(map_test)

# 添加子目录
add_executable(${PROJECT_NAME} map_test.cpp)

# 包含头文件目录
target_include_directories(${PROJECT_NAME} 
PUBLIC
${Pnc_Map_Dir}
)

# 链接动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)

# 添加测试
add_test(
    NAME map_info_test
    COMMAND ${PROJECT_NAME}
)