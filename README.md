# <b>Gestionnaire de Tâches — C++</b>

<br>

> Gestionnaire de tâches en ligne de commande écrit en C++ avec une architecture orientée objet.  
> Compatible avec Windows (CMD), Linux et macOS.

<br>
<br>

## <b>Auteurs : </b>

Ayoub EL WAMY   / 
ACHRAF KADDOURI    / 
Abdellah OMALEK    / 
Taha BENZAKI    .

<br>

## <b>Aperçu</b>

Ce projet est un gestionnaire de tâches basé sur le terminal qui permet aux utilisateurs de créer, organiser, modifier et sauvegarder des tâches directement depuis la ligne de commande.  
Chaque tâche contient :
- Un identifiant unique
- Un titre
- Une catégorie
- Un niveau de priorité
- Un statut

Toutes les données sont automatiquement enregistrées dans un fichier texte et rechargées lors du prochain démarrage de l’application.

<br>

## <b>Fonctionnalités</b>

| Fonctionnalité | Description |
|---|---|
| Ajouter une tâche | Créer une tâche avec un titre, une catégorie, une priorité et un statut |
| Modifier une tâche | Mettre à jour n’importe quel champ d’une tâche via son ID |
| Supprimer une tâche | Supprimer une tâche à l’aide de son ID |
| Afficher les tâches | Afficher toutes les tâches dans un tableau propre et aligné |
| Trier les tâches | Trier les tâches par priorité (Urgent en premier) |
| Sauvegarder les tâches | Enregistrer les tâches dans `data/tasks.txt` |
| Charger les tâches | Recharger automatiquement les tâches sauvegardées |

<br>

## <b>Valeurs Acceptées</b>

### <b>Niveaux de Priorité</b>

| Choix | Valeur |
|---|---|
| 1 | Urgent |
| 2 | Élevée |
| 3 | Normale |
| 4 | Faible |

<br>

### <b>Statut des Tâches</b>

| Choix | Valeur |
|---|---|
| 1 | À faire |
| 2 | En cours |
| 3 | En attente |
| 4 | Terminée |
| 5 | Annulée |

<br>

> La priorité et le statut sont sélectionnés à l’aide de menus numérotés — la saisie libre n’est pas autorisée.

<br>

## <b>Compilation & Exécution</b>

### <b>Prérequis</b>

- CMake 3.14+
- Compilateur compatible C++17 :
  - GCC
  - Clang
  - MSVC

<br>

### <b>Option 1 : Exécution Rapide (Linux / macOS)</b>

Vous pouvez configurer, compiler et exécuter le projet automatiquement en une seule étape :

```bash
chmod +x run.sh
./run.sh

<b>Option 2 : Compilation & Exécution Manuelles</b>

Si vous préférez compiler et exécuter le projet manuellement :

<b>1. Compiler le projet :</b>
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
<b>2. Exécuter l’application :</b>

Linux / macOS :

./build/bin/todo_app

Windows CMD :

build\bin\todo_app.exe
<br>

Le dossier data/ est automatiquement créé lors de la première sauvegarde.

<br>
<b>Structure du Projet</b>
Cpp-ToDoList/
├──  Projet/
    └──Rapport de Projet.pdf
├── CMakeLists.txt
├── .gitignore
├── README.md 
├── run.sh
├── include/
│   ├── Task.h
│   ├── TaskManager.h
│   ├── FileManager.h
│   └── Notification.h
└── src/
    ├── main.cpp
    ├── Task.cpp
    ├── TaskManager.cpp
    └── FileManager.cpp


