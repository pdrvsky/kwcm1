cmake_minimum_required (VERSION 2.8)

option (USE_TRIGONOMETRY_DEGREE
"Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)

project (KWCM1)
add_executable(Main main.cpp)

if (USE_TRIGONOMETRY_DEGREE)
	include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
	add_subdirectory(Trygonometria)
	target_link_libraries (Main Trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)

configure_file (
"${PROJECT_SOURCE_DIR}/MainConfig.h.in"
"${PROJECT_BINARY_DIR}/MainConfig.h"
)
include_directories("${PROJECT_BINARY_DIR}")