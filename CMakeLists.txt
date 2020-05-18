cmake_minimum_required(VERSION 3.16)
project(opencv_cv1)

SET(OpenCV_DIR /usr/local/opt/opencv)

SET(CMAKE_CXX_STANDARD 20)

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS})

add_executable(opencv_cv1 main.cpp)

target_link_libraries( opencv_cv1 ${OpenCV_LIBS} )