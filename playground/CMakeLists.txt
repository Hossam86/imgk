add_executable(playground playground.cpp)


link_directories(${CMAKE_BINARY_DIR}/imgk)
target_link_libraries(playground PRIVATE imgk)