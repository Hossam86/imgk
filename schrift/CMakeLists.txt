
project(schrift LANGUAGES C)
set(HEADER_FILES include/schrift/schrift.h)

set(SOURCE_FILES src/schrift.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(schrift  ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(schrift PRIVATE src ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(schrift PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
