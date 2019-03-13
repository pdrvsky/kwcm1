cmake_minimum_required (VERSION 2.8)

project (KWCM1)
add_executable(Main main.cpp)

include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Main Trygonometria)