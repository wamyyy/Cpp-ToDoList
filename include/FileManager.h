#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "Task.h"
#include <vector>

class FileManager {
public:
    static void saveTasks(vector<Task>& tasks);
    static void loadTasks(vector<Task>& tasks);
};

#endif