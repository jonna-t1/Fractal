cmake_minimum_required(VERSION 3.7)

project(opencvTest)

add_definitions(-std=c++17 -lSDL -lSDL_Image -lfreeimage)

set(CMAKE_CXX_STANDARD 17)

## opencv ##
find_package (OpenCV 4.0.0 REQUIRED)
include_directories ("/usr/include/opencv4/")

## sdl2 ##
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

## src files ##
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

## free image ##
find_path(SIFTGPU_INCLUDE_DIR FreeImage.h)
find_library(SIFTGPU_LIBRARY libfreeimage)
include_directories(${SIFTGPU_INCLUDE_DIR})

add_executable(opencvTest ${SOURCES})

#add_executable(opencvTest src/main.cpp src/zoom.cpp)
target_link_libraries(opencvTest ${OpenCV_LIBS} ${SDL2_LIBRARIES} SDL2_image freeimage)