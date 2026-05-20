#ifndef TASK_H
#define TASK_H
#include<string>
using namespace std;

class Task {
private:
    int id;
    string title;
    string category;
    string priority;
    string status;

public:
    Task();
    Task(int id, string title, string category,string priority, string status);

    void display() const;

    int getId() const;
    string getTitle() const;
    string getCategory() const;
    string getPriority() const;
    string getStatus() const;

    void setTitle(string title);
    void setCategory(string category);
    void setPriority(string priority);
    void setStatus(string status);
};
#endif
