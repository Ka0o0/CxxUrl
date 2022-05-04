cmake_minimum_required (VERSION 3.5)

project (CxxUrl_example_cmake_simple
         LANGUAGES CXX C)

add_executable(${PROJECT_NAME} example.cpp)

target_link_libraries(${PROJECT_NAME} CxxUrl)
