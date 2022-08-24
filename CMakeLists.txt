cmake_minimum_required(VERSION 3.7)

project(opencvTest)

add_definitions(-std=c++17 -lSDL -lSDL_Image)

set(CMAKE_CXX_STANDARD 17)
find_package (OpenCV 4.0.0 REQUIRED)
include_directories ("/usr/include/opencv4/")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(opencvTest src/main.cpp)
target_link_libraries(opencvTest ${OpenCV_LIBS} ${SDL2_LIBRARIES} SDL2_image)