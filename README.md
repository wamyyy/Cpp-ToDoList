# Gestionnaire de Tâches — C++

Application de gestion de tâches en ligne de commande développée en **C++17** en utilisant une architecture basée sur la **Programmation Orientée Objet (POO)**.

Compatible avec **Windows (CMD), Linux et macOS**.

<<<<<<< HEAD
---
=======
<br>
## <b>By : </b>
Ayoub EL WAMY   /  </b>
ACHRAF KADDOURI   /  </b>
Abdellah OMALEK   /  </b>
Taha BENZAKI   .  </b>
>>>>>>> cdd5045 (Corrige le design V2 avec quelques améliorations)

##  Réalisé par

- Ayoub EL WAMY  
- Achraf KADDOURI  
- Abdellah OMALEK  
- Taha BENZAKI  

---

##  Présentation

Ce projet est un gestionnaire de tâches fonctionnant dans le terminal.  
Il permet aux utilisateurs de **créer, organiser, modifier, supprimer et sauvegarder des tâches** directement depuis la ligne de commande.

Chaque tâche contient :

- Un identifiant unique (ID)
- Un titre
- Une catégorie
- Un niveau de priorité
- Un statut

Toutes les données sont automatiquement sauvegardées dans un fichier texte puis rechargées au lancement de l’application.

---

##  Fonctionnalités

| Fonctionnalité | Description |
|----------------|-------------|
|  Ajouter une tâche | Créer une tâche avec un titre, une catégorie, une priorité et un statut |
|  Modifier une tâche | Modifier les informations d’une tâche via son ID |
|  Supprimer une tâche | Supprimer une tâche grâce à son ID |
|  Afficher les tâches | Afficher toutes les tâches dans un tableau formaté |
|  Trier les tâches | Trier les tâches par priorité (Urgent en premier) |
|  Sauvegarder les tâches | Enregistrer les tâches dans `data/tasks.txt` |
|  Charger les tâches | Recharger automatiquement les tâches sauvegardées |

---

##  Valeurs Acceptées

### Niveaux de Priorité

| Choix | Valeur |
|-------|---------|
| 1 | Urgent |
| 2 | Haute |
| 3 | Normale |
| 4 | Faible |

### Statut des Tâches

| Choix | Valeur |
|-------|---------|
| 1 | À faire |
| 2 | En cours |
| 3 | En attente |
| 4 | Terminée |
| 5 | Annulée |

> Les niveaux de priorité et les statuts sont sélectionnés via des menus numériques afin d’éviter les erreurs de saisie.

---

## ⚙️ Compilation & Exécution

### Prérequis

- CMake 3.14+
- Compilateur compatible C++17 :
  - GCC
  - Clang
  - MSVC

---

##  Compilation du Projet

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
