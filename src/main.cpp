#include "TaskManager.h"
#include <iostream>

int main() {
    TaskManager manager;
    manager.loadFromFile("data/tasks.json");

    // пример работы
    manager.addTask(Task("Учеба", "Изучить Git + C++", "2026-03-10"));
    manager.listTasks();

    manager.saveToFile("data/tasks.json");
    return 0;
}
