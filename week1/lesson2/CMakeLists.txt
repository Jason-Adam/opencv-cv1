cmake_minimum_required(VERSION 3.16)
project(lesson2)

SET(OpenCV_DIR /usr/local/opt/opencv)

SET(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lesson2 main/basic-image-operations.cpp)

target_link_libraries(lesson2 ${OpenCV_LIBS})
