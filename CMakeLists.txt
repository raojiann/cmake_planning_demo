cmake_minimum_required(VERSION 3.19.0)
project(planning
    VERSION 0.1.0
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/raojiann/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Reult_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

# 添加子目录
add_subdirectory(src) # add src subdirectory