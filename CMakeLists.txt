cmake_minimum_required(VERSION 3.5.0)
project(Stack VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(./include)
add_executable(${PROJECT_NAME} main.cpp)
# target_link_libraries(${PROJECT_NAME} 
#         PUBLIC 
#         include
#         )
target_include_directories(${PROJECT_NAME} PUBLIC include/)
add_compile_options("-Wall")
