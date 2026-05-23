#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"
using namespace std;

class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask();
    void modifyTask();
    void deleteTask();
    void displayTasks() const;
    void sortTasks();

    vector<Task>& getTasks();
};

#endif
