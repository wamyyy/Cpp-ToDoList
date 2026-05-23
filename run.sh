#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Colors for a clean and professional output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}[+] Configuration du build avec CMake...${NC}"
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release

echo -e "${BLUE}[+] Compilation du projet...${NC}"
cmake --build build

echo -e "${GREEN}[+] Compilation réussie. Lancement de l'application...${NC}"
echo "--------------------------------------------------------"
./build/bin/todo_app
