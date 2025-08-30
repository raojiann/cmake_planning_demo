project(process)

# 添加动态库
add_library(${PROJECT_NAME} 
SHARED
process.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Pnc_Map_Dir}
)

# 链接pnc_map库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)