#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

using namespace std;

class Student {
private:
    string name;
    int id;
    int year;
    string department;

public:
    Student(string name, int id, int year, string department);
    void display();
    ~Student();
};

#endif













#endif
