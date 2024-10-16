cmake_minimum_required(VERSION 3.22)

set(PROJECTNAME "bigproject")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(${PROJECTNAME} VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)
add_subdirectory(apps)
