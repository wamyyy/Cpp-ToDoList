# 📝 Gestionnaire de Tâches (Todo List) en C++

Un projet de gestionnaire de tâches en ligne de commande (CLI) développé en C++. Cette application permet aux utilisateurs de gérer leurs tâches quotidiennes de manière simple et efficace, avec des fonctionnalités de persistance des données.

## 🌟 Description

Ce gestionnaire de tâches permet d'organiser vos activités avec différentes propriétés telles que la catégorie, la priorité et le statut. 

**Fonctionnalités principales :**
- **Ajout de tâches :** Créer une nouvelle tâche avec un ID, un titre, une catégorie, une priorité et un statut.
- **Modification de tâches :** Mettre à jour les informations d'une tâche existante via son ID.
- **Suppression de tâches :** Retirer une tâche de la liste.
- **Affichage et Tri :** Visualiser l'ensemble des tâches et les trier par niveau de priorité.
- **Persistance des données :** Sauvegarde et chargement depuis le fichier de configuration `data/tasks.txt`.

---

## 🛠️ Installation

### Prérequis
- Un compilateur C++ (ex: `g++` ou `clang`)
- Un terminal (Linux, macOS, ou Windows avec MinGW/WSL)

### Étapes d'installation

1. **Préparer le répertoire du projet :**
   Ouvrez un terminal et placez-vous à la racine du projet (`TodoList`).

2. **Créer le dossier de données :**
   Le programme nécessite un dossier `data` pour stocker les sauvegardes de vos tâches.
   ```bash
   mkdir -p data
   ```

3. **Compiler le code source :**
   Exécutez la commande suivante pour compiler le projet et générer l'exécutable `todo_app` :
   ```bash
   g++ -I./include src/*.cpp -o todo_app
   ```

---

## 🚀 Utilisation

Une fois le projet compilé, lancez l'application en exécutant la commande suivante :
```bash
./todo_app
```

### Naviguer dans le Menu Principal
Le programme fonctionne avec un menu interactif. Tapez le numéro correspondant à l'action souhaitée :

- `1` **Ajouter une tache** : Laissez-vous guider pour entrer les détails (ID, Titre, Catégorie, etc.).
- `2` **Modifier une tache** : Entrez l'ID de la tâche pour mettre à jour son titre.
- `3` **Supprimer une tache** : Entrez l'ID pour effacer la tâche de votre liste.
- `4` **Afficher les taches** : Affiche toutes les tâches actuelles.
- `5` **Trier les taches** : Réorganise la liste.
- `6` **Sauvegarder** : Enregistre vos tâches dans `data/tasks.txt`.
- `7` **Charger** : Restaure vos tâches depuis `data/tasks.txt`.
- `0` **Quitter** : Ferme l'application.

> **💡 Astuce :** N'oubliez pas de **Sauvegarder (Choix 6)** vos modifications avant de quitter le programme pour ne pas perdre vos nouvelles tâches !
