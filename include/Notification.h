#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <iostream>
using namespace std;

class Notification {
public:
    virtual void alert() = 0;
};

class UrgentTask : public Notification {
public:
    void alert() override {
        cout << "[URGENT] Attention immediate !" << endl;
    }
};

class NormalTask : public Notification {
public:
    void alert() override {
        cout << "[NORMAL] Tache classique." << endl;
    }
};

#endif
