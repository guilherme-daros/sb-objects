set(APP1_NAME "App1")

add_executable(${APP1_NAME} Main.cpp)

target_include_directories(${APP1_NAME} PUBLIC 
  ${CMAKE_CURRENT_LIST_DIR}/include)

target_link_libraries(${APP1_NAME} bigproject_lib)

add_subdirectory(src)
