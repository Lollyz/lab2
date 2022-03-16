cmake_minimum_required(VERSION 2.8.12)
project(lab2)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lab2 src/lab2.cpp)
target_link_libraries(lab2 ${OpenCV_LIBS})