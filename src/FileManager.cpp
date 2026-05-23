#include "FileManager.h"
#include <fstream>
#include <iostream>
#include <sstream>

#ifdef _WIN32
#include <direct.h>
#define MAKE_DIR(d) _mkdir(d)
#else
#include <sys/stat.h>
#define MAKE_DIR(d) mkdir(d, 0777)
#endif

void FileManager::saveTasks(vector<Task>& tasks) {
    MAKE_DIR("data");
    ofstream file("data/tasks.txt");

    if (!file.is_open()) {
        cout << "  [!] Impossible d'ouvrir le fichier de sauvegarde." << endl;
        return;
    }

    for (auto& task : tasks) {
        file << task.getId()       << ";"
             << task.getTitle()    << ";"
             << task.getCategory() << ";"
             << task.getPriority() << ";"
             << task.getStatus()   << "\n";
    }

    file.close();
    cout << "  [+] Sauvegarde terminee (" << tasks.size() << " tache(s))." << endl;
}

void FileManager::loadTasks(vector<Task>& tasks) {
    ifstream file("data/tasks.txt");

    if (!file.is_open()) {
        cout << "  [!] Fichier introuvable. Aucune donnee chargee." << endl;
        return;
    }

    tasks.clear();

    string line;
    int loaded = 0;

    while (getline(file, line)) {
        if (line.empty()) continue;

        istringstream ss(line);
        string idStr, title, category, priority, status;

        if (!getline(ss, idStr,    ';')) continue;
        if (!getline(ss, title,    ';')) continue;
        if (!getline(ss, category, ';')) continue;
        if (!getline(ss, priority, ';')) continue;
        if (!getline(ss, status))        continue;

        try {
            int id = stoi(idStr);
            tasks.push_back(Task(id, title, category, priority, status));
            ++loaded;
        } catch (...) {
            continue;
        }
    }

    file.close();
    cout << "  [+] Chargement termine (" << loaded << " tache(s))." << endl;
}
