cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set (EDITOR_PROJECT_NAME editor)

add_executable(${EDITOR_PROJECT_NAME} 	
	src/main.cpp
)
	
target_link_libraries(${EDITOR_PROJECT_NAME} core)
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIN}/bin/)