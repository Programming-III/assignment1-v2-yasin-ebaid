#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:
    Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents);
    void addStudents(const Student& s);
    void display();
    ~Course();
};














#endif
