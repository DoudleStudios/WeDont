cmake_minimum_required(VERSION 3.18)

project(WeDont)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")

file(GLOB_RECURSE SOURCES "src/*.hpp" "src/*.cpp" "src/*.h" "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "src")

add_subdirectory("dep/SDL")
target_link_libraries(${PROJECT_NAME} PRIVATE "SDL2-static" "SDL2main")