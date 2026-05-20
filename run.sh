#!/bin/bash
# Créer le dossier build s'il n'existe pas
mkdir -p build
cd build

# Générer les fichiers avec CMake et compiler
cmake ..
make

# Créer le dossier data pour les sauvegardes (au cas où)
mkdir -p data

# Lancer l'application
./todo_app
