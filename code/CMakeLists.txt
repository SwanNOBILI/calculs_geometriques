# Version minimale de CMake
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(MonProjet)

# Spécifie le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 11)

# Dossier de destination pour les fichiers compilés
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Inclure le dossier include/ pour les headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Ajouter les fichiers sources du projet
file(GLOB_RECURSE SOURCES "src/*.cpp" "main.cpp")

# Créer l'exécutable
add_executable(MonProjet ${SOURCES})