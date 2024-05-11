set(LIBRARY_NAME "bigproject_lib")

add_library(${LIBRARY_NAME} STATIC)

target_include_directories(${LIBRARY_NAME}
  PUBLIC ${CMAKE_CURRENT_LIST_DIR} include
  )

add_subdirectory(src)

