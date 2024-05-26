set(HEADER_FILES include/imgk/Image.h
        include/imgk/stb_image.h
        include/imgk/stb_image_write.h)

set(SOURCE_FILES src/imgk/Image.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(imgk  ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories(imgk PRIVATE src ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(imgk PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)