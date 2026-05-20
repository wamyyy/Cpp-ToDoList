# TodoList C++

Un petit programme en ligne de commande pour gérer des tâches, écrit en C++. 
C'est un projet simple pour ajouter, modifier, supprimer et sauvegarder des tâches.

## Ce que le programme peut faire

Le programme permet de :
- Ajouter une nouvelle tâche (avec titre, catégorie, priorité, statut)
- Modifier le titre d'une tâche existante
- Supprimer une tâche en utilisant son ID
- Afficher la liste de toutes les tâches
- Trier les tâches selon leur priorité
- Sauvegarder dans un fichier texte (`data/tasks.txt`) pour ne rien perdre
- Charger les tâches depuis ce fichier quand on relance le programme

## Structure du projet

- `include/` : contient les fichiers d'en-tête (.h)
- `src/` : contient le code source (.cpp)
- `data/` : dossier où le fichier de sauvegarde est créé

## Comment compiler le code (avec CMake)

Assurez-vous d'avoir CMake et un compilateur C++ installés. 
Ouvrez votre terminal dans le dossier du projet et tapez ces commandes :

```bash
mkdir -p data
mkdir -p build
cd build
cmake ..
make
```

## Comment l'utiliser

Une fois que c'est compilé, vous pouvez lancer l'application avec :

```bash
./todo_app
```

Un menu va s'afficher. Il suffit de taper le numéro du choix que vous voulez faire et de cliquer sur Entrée. Suivez ensuite les instructions à l'écran. 