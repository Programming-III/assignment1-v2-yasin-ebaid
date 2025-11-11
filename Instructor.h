#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor {
private:
    string name;
    int id;
    string department;
    int expYears;

public:
    Instructor(string name, int id, string department, int expYears);
    void display();
    ~Instructor();
};











#endif
