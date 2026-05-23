cmake_minimum_required(VERSION 3.14)

project(todo_app
    VERSION 1.0
    DESCRIPTION "Task Manager / TodoList (OOP)"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

if(MSVC)
    add_compile_options(/W3 /utf-8)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(SOURCES
    src/main.cpp
    src/Task.cpp
    src/TaskManager.cpp
    src/FileManager.cpp
)

add_executable(todo_app ${SOURCES})

target_include_directories(todo_app PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

set_target_properties(todo_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

if(WIN32)
    target_compile_definitions(todo_app PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

message(STATUS "Build type  : ${CMAKE_BUILD_TYPE}")
message(STATUS "C++ standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Compiler    : ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
