project(show_result)

# 添加动态库
add_library(${PROJECT_NAME} 
SHARED
show_result.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)

# 链接pnc_map库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Show_Reult_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)