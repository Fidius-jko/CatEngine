# cmake version
cmake_minimum_required(VERSION 3.22)

# cmake project
set(EDITOR_PROJECT_NAME CatEngineEditor)
project(${EDITOR_PROJECT_NAME} VERSION 0.0)

# source
set(EDITOR_ALL_SOURCE
	src/main.cpp
)

# generate program
add_executable(${EDITOR_PROJECT_NAME}
	${EDITOR_ALL_SOURCE}
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES
	${EDITOR_ALL_SOURCE}
)

# config file
configure_file(Config/VERSION.hpp.in Config/VERSION.hpp)

target_include_directories(${EDITOR_PROJECT_NAME} PRIVATE
                           "${PROJECT_BINARY_DIR}"
                           )

# core
target_link_libraries(${EDITOR_PROJECT_NAME} PUBLIC CatEngineCore)

# the exe path
set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)