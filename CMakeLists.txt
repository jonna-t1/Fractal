cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)
find_package (OpenCV 4.0.0 REQUIRED)
include_directories ("/usr/include/opencv4/")
add_executable(opencvTest src/main.cpp)
target_link_libraries(opencvTest ${OpenCV_LIBS})
