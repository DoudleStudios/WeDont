cmake_minimum_required(VERSION 3.18)

project(WeDont)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS "-fdeclspec")

file(GLOB_RECURSE SOURCES "src/**.hpp" "src/**.cpp" "src/**.h" "src/**.c")

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "src")