cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME CatEngine)
project(${PROJECT_NAME})

add_subdirectory(CatEngineCore)
add_subdirectory(CatEngineEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CatEngineEditor)
