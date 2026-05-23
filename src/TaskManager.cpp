#include "TaskManager.h"
#include <iostream>
#include <algorithm>
#include <limits>
#include <iomanip>

static int priorityRank(const string& p) {
    if (p == "Urgent")  return 0;
    if (p == "Haute")   return 1;
    if (p == "Normale") return 2;
    if (p == "Basse")   return 3;
    return 4;
}

static string pickPriority() {
    cout << "\n  Priorite :" << endl;
    cout << "    1. Urgent" << endl;
    cout << "    2. Haute" << endl;
    cout << "    3. Normale" << endl;
    cout << "    4. Basse" << endl;
    cout << "  Choix : ";
    int c; cin >> c;
    if (cin.fail()) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return ""; }
    cin.ignore();
    switch (c) {
        case 1: return "Urgent";
        case 2: return "Haute";
        case 3: return "Normale";
        case 4: return "Basse";
        default: return "";
    }
}

static string pickStatus() {
    cout << "\n  Statut :" << endl;
    cout << "    1. A faire" << endl;
    cout << "    2. En cours" << endl;
    cout << "    3. En attente" << endl;
    cout << "    4. Termine" << endl;
    cout << "    5. Annule" << endl;
    cout << "  Choix : ";
    int c; cin >> c;
    if (cin.fail()) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); return ""; }
    cin.ignore();
    switch (c) {
        case 1: return "A faire";
        case 2: return "En cours";
        case 3: return "En attente";
        case 4: return "Termine";
        case 5: return "Annule";
        default: return "";
    }
}

void TaskManager::addTask() {
    int id;
    string title, category, priority, status;

    cout << "\n  ID       : ";
    cin >> id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "  [!] ID invalide. Tache non ajoutee." << endl;
        return;
    }
    cin.ignore();

    for (const auto& t : tasks) {
        if (t.getId() == id) {
            cout << "  [!] Un ID identique existe deja." << endl;
            return;
        }
    }

    cout << "  Titre    : ";
    getline(cin, title);

    cout << "  Categorie: ";
    getline(cin, category);

    priority = pickPriority();
    status   = pickStatus();

    if (title.empty() || category.empty() || priority.empty() || status.empty()) {
        cout << "  [!] Champs vides non autorises. Tache non ajoutee." << endl;
        return;
    }

    tasks.push_back(Task(id, title, category, priority, status));
    cout << "  [+] Tache ajoutee avec succes." << endl;
}

void TaskManager::modifyTask() {
    int id;
    cout << "\n  ID de la tache a modifier : ";
    cin >> id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "  [!] ID invalide." << endl;
        return;
    }
    cin.ignore();

    for (auto& task : tasks) {
        if (task.getId() == id) {
            string val;

            cout << "  Nouveau titre    [" << task.getTitle()    << "] : ";
            getline(cin, val);
            if (!val.empty()) task.setTitle(val);

            cout << "  Nouvelle categorie [" << task.getCategory() << "] : ";
            getline(cin, val);
            if (!val.empty()) task.setCategory(val);

            cout << "  Priorite actuelle : " << task.getPriority() << endl;
            cout << "  Changer ? (1=oui / Entree=non) : ";
            getline(cin, val);
            if (val == "1") { string p = pickPriority(); if (!p.empty()) task.setPriority(p); }

            cout << "  Statut actuel : " << task.getStatus() << endl;
            cout << "  Changer ? (1=oui / Entree=non) : ";
            getline(cin, val);
            if (val == "1") { string s = pickStatus(); if (!s.empty()) task.setStatus(s); }

            cout << "  [~] Tache modifiee." << endl;
            return;
        }
    }

    cout << "  [!] Tache introuvable." << endl;
}

void TaskManager::deleteTask() {
    int id;
    cout << "\n  ID de la tache a supprimer : ";
    cin >> id;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "  [!] ID invalide." << endl;
        return;
    }
    cin.ignore();

    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->getId() == id) {
            tasks.erase(it);
            cout << "  [-] Tache supprimee." << endl;
            return;
        }
    }

    cout << "  [!] Tache introuvable." << endl;
}

void TaskManager::displayTasks() const {
    if (tasks.empty()) {
        cout << "\n  Aucune tache enregistree." << endl;
        return;
    }

    const string sep = "  +" + string(6, '-') + "+" + string(22, '-') + "+"
                             + string(14, '-') + "+" + string(12, '-') + "+"
                             + string(14, '-') + "+";
    cout << "\n" << sep << endl;
    cout << "  | "
         << setw(4)  << left << "ID"       << " | "
         << setw(20) << left << "Titre"    << " | "
         << setw(12) << left << "Categorie"<< " | "
         << setw(10) << left << "Priorite" << " | "
         << setw(12) << left << "Statut"
         << " |" << endl;
    cout << sep << endl;

    for (const auto& task : tasks) {
        task.display();
    }

    cout << sep << endl;
    cout << "  " << tasks.size() << " tache(s) affichee(s)." << endl;
}

void TaskManager::sortTasks() {
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return priorityRank(a.getPriority()) < priorityRank(b.getPriority());
    });

    cout << "  [+] Taches triees par priorite (Urgent > Haute > Normale > Basse)." << endl;
}

vector<Task>& TaskManager::getTasks() {
    return tasks;
}
