# cmake version
cmake_minimum_required(VERSION 3.22)

# cmake project
set(ENGINE_PROJECT_NAME CatEngineCore)
project(${ENGINE_PROJECT_NAME} VERSION 0.1)

# source 
set(ENGINE_PRIVATE_SOURCE
	src/CatEngineCore/test.cpp
)

set(ENGINE_PUBLIC_INCLUDE
	include/CatEngineCore/test.hpp
)

set(ENGINE_ALL_SOURCE
	${ENGINE_PRIVATE_SOURCE}
	${ENGINE_PUBLIC_INCLUDE}
)

# generate lib
add_library(${ENGINE_PROJECT_NAME} STATIC
	${ENGINE_ALL_SOURCE}
)

# for IDE
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES
	${ENGINE_ALL_SOURCE}
)

# config file
configure_file(Config/VERSION.hpp.in Config/VERSION.hpp)

target_include_directories(${ENGINE_PROJECT_NAME} PRIVATE
                           "${PROJECT_BINARY_DIR}"
                           )

# lib dir
target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC include)
target_include_directories(${ENGINE_PROJECT_NAME} PRIVATE src)
# c++ std
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)