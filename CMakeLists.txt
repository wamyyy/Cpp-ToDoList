cmake_minimum_required(VERSION 3.10)
project(todo_app CXX)

# On utilise C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Indiquer où se trouvent les fichiers d'en-tête (.h)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Lister explicitement les fichiers sources (pour une compilation reproductible)
set(SOURCES
    src/main.cpp
    src/Task.cpp
    src/TaskManager.cpp
    src/FileManager.cpp
)

# Créer l'exécutable
add_executable(todo_app ${SOURCES})
