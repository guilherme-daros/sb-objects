cmake_minimum_required(VERSION 3.28)

set(PROJECTNAME "bigproject")

project(${PROJECTNAME} VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)
add_subdirectory(apps)
