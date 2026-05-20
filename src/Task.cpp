#include "Task.h"
#include <iostream>


Task::Task() {
    id = 0;
}

Task::Task(int id, string title, string category,string priority, string status)
{
    this->id = id;
    this->title = title;
    this->category = category;
    this->priority = priority;
    this->status = status;
}

void Task::display() const {
  cout << "ID: " << id << " | Titre: " << title<< " | Catégorie: " << category<< " | Priorité: " << priority<< " | Statut: " << status << endl;
}

int Task::getId() const {
    return id;
}

string Task::getTitle() const {
    return title;
}

string Task::getCategory() const {
    return category;
}

string Task::getPriority() const {
    return priority;
}

string Task::getStatus() const {
    return status;
}

void Task::setTitle(string title) {
    this->title = title;
}

void Task::setCategory(string category) {
    this->category = category;
}

void Task::setPriority(string priority) {
    this->priority = priority;
}

void Task::setStatus(string status) {
    this->status = status;
}