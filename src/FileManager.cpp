#include "FileManager.h"
#include <fstream>  
#include <iostream>

void FileManager::saveTasks(vector<Task>& tasks) {
    ofstream file("data/tasks.txt");

    for (auto &task : tasks) {
        file << task.getId() << ";"
             << task.getTitle() << ";"
             << task.getCategory() << ";"
             << task.getPriority() << ";"
             << task.getStatus() << endl;
    }

    file.close();
    cout << "Sauvegarde terminee !" << endl;
}

void FileManager::loadTasks(vector<Task>& tasks) {
    ifstream file("data/tasks.txt");

    int id;
    string title, category, priority, status;

    while (file >> id) {
        file.ignore();

        getline(file, title, ';');
        getline(file, category, ';');
        getline(file, priority, ';');
        getline(file, status);

        tasks.push_back(Task(id, title, category, priority, status));
    }

    file.close();
    cout << "Chargement termine !" << endl;
}