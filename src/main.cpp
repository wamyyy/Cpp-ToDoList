#include <iostream>
#include "TaskManager.h"
#include "FileManager.h"
#include "Notification.h"
#include <limits>
using namespace std;

int main() {
    TaskManager manager;

    int choice;

    do {
        cout << "\n1. Ajouter une tache" << endl;
        cout << "2. Modifier une tache" << endl;
        cout << "3. Supprimer une tache" << endl;
        cout << "4. Afficher les taches" << endl;
        cout << "5. Trier les taches" << endl;
        cout << "6. Sauvegarder" << endl;
        cout << "7. Charger" << endl;
        cout << "0. Quitter" << endl;

        cout << "Choix: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = -1; // Force default case
        }

        switch (choice) {
        case 1:
            manager.addTask();
            break;

        case 2:
            manager.modifyTask();
            break;

        case 3:
            manager.deleteTask();
            break;

        case 4:
            manager.displayTasks();
            break;

        case 5:
            manager.sortTasks();
            break;

        case 6:
            FileManager::saveTasks(manager.getTasks());
            break;

        case 7:
            FileManager::loadTasks(manager.getTasks());
            break;

        case 0:
            cout << "Au revoir !" << endl;
            break;

        default:
            cout << "Choix invalide !" << endl;
        }

    } while (choice != 0);

    return 0;
}