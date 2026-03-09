#pragma once
#include "Task.h"
#include <vector>
#include <string>

using namespace std;

class TaskManager {
private:
    vector<Task> tasks;
public:
    void addTask(const Task& task);
    void removeTask(int index);
    void markDone(int index);
    void listTasks(bool onlyDone = false);
    void saveToFile(const string& filename);
    void loadFromFile(const string& filename);
};
