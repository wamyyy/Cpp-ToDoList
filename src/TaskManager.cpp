#include "TaskManager.h"
#include <iostream>
#include <algorithm>
void TaskManager::addTask() {
    int id;
    string title, category, priority, status;

    cout << "ID: ";
    cin >> id;
    cin.ignore();

    cout << "Titre: ";
    getline(cin, title);

    cout << "Categorie: ";
    getline(cin, category);

    cout << "Priorite: ";
    getline(cin, priority);

    cout << "Statut: ";
    getline(cin, status);

    tasks.push_back(Task(id, title, category, priority, status));

    cout << "Tache ajoutee avec succes !" << endl;
}

void TaskManager::modifyTask() {
    int id;
    cout << "Entrer ID de la tache: ";
    cin >> id;
    cin.ignore();

    for (auto &task : tasks) {
        if (task.getId() == id) {
            string title;
            cout << "Nouveau titre: ";
            getline(cin, title);
            task.setTitle(title);

            cout << "Tache modifiee !" << endl;
            return;
        }
    }

    cout << "Tache introuvable !" << endl;
}

void TaskManager::deleteTask() {
    int id;
    cout << "Entrer ID: ";
    cin >> id;
    cin.ignore();

    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->getId() == id) {
            tasks.erase(it);
            cout << "Tache supprimee !" << endl;
            return;
        }
    }

    cout << "Tache introuvable !" << endl;
}

void TaskManager::displayTasks() const {
    for (const auto &task : tasks) {
        task.display();
    }
}

void TaskManager::sortTasks() {
    sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b) {
        return a.getPriority() < b.getPriority();
    });

    cout << "Taches triees !" << endl;
}

vector<Task>& TaskManager::getTasks() {
    return tasks;
}