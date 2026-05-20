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

## Comment compiler et lancer le projet

J'ai ajouté un petit script pour vous simplifier la vie. Au lieu de taper plein de commandes, ouvrez votre terminal dans le dossier du projet et tapez juste :

```bash
./run.sh
```

Ce script va automatiquement créer le dossier `build/`, configurer le projet avec `CMake`, le compiler et le lancer !

Si vous voulez le faire manuellement, voici les commandes :
```bash
mkdir -p build && cd build
cmake ..
make
./todo_app
```

## Ce qui a été corrigé récemment :
- Ajout de `CMakeLists.txt` et du script `run.sh` pour compiler plus facilement.
- Le dossier `data/` se crée tout seul maintenant si on lance l'app depuis `build/`, donc plus de soucis de sauvegarde !
- Correction du bug où le menu tournait en boucle infinie si on tapait une lettre au lieu d'un chiffre.
- Ajout du fichier `.gitignore` pour garder le projet propre sur GitHub.
