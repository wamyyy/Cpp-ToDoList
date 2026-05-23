Task Manager — C++

Gestionnaire de taches en ligne de commande, ecrit en C++ avec une architecture orientee objet.
Compatible Windows (CMD) et Linux / macOS.


Apercu
Ce programme permet de creer, organiser et persister des taches directement dans le terminal.
Chaque tache possede un identifiant unique, un titre, une categorie, une priorite et un statut.
Les donnees sont sauvegardees dans un fichier texte et rechargees automatiquement a la prochaine execution.

Fonctionnalites
ActionDescriptionAjouterCreer une tache avec titre, categorie, priorite, statutModifierMettre a jour n'importe quel champ via l'IDSupprimerRetirer une tache par son IDAfficherVoir toutes les taches dans un tableau aligneTrierClasser par priorite (Urgent en premier)SauvegarderEcrire les taches dans data/tasks.txtChargerRestaurer les taches depuis le fichier

Valeurs acceptees
Priorite
ChoixValeur1Urgent2Haute3Normale4Basse
Statut
ChoixValeur1A faire2En cours3En attente4Termine5Annule
La priorite et le statut se choisissent via un menu numerote — aucune saisie libre possible.

Compilation et execution
Prerequis : CMake 3.14 ou superieur, compilateur C++17 (GCC, Clang ou MSVC)
bashcmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
Linux / macOS
bash./build/bin/todo_app
Windows CMD
build\bin\todo_app.exe
Le dossier data/ est cree automatiquement lors de la premiere sauvegarde.

Structure du projet
TodoList/
├── CMakeLists.txt
├── README.md
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
