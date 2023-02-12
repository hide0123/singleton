cmake_minimum_required()
project(singleton)

include_directories(include)
file(GLOB SRC src/*.cpp)
add_executable(${PROJECT_NAME} ${SRC})