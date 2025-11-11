#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

#include <iostream>
using namespace std;

class Person{
protected:
	string name;
	int id;
public:

	Person(string name , int id){
		this->name = name;
		this->id = id;
	}
	void display(){
		cout<<"Person name is " << name <<endl;
		cout<<"Person Id is "<<id<<endl;
	}
	~Person(){

	}
};
class Student : Person{
private:
	int yearLevel;
	string major;
public:
	Student(string name , int id , int yearLevel , string major):
	Person(name,id){
		this->yearLevel = yearLevel;
		this->major = major;
	}
	void display(){
		cout<<"Student name is " << name <<endl;
		cout<<"Student Id is "<<id<<endl;
		cout<<"Student is in year " <<yearLevel<<endl;
		cout<<"student is in major"<<major<<endl;
	}
	~Student(){

	}
};
class Instuctor : Person{
private:
	string department;
	int expYears;
public:
	Instuctor(string name , int id , string department , int expYears):
		Person(name,id){
		this->department = department;
		this->expYears = expYears;
	}
	void display(){
		cout<<"Instuctor name is " << name <<endl;
		cout<<"Dep is "<<id<<endl;
		cout<<"exp years is " << department << endl;
		cout<<"exp years is " << expYears << endl;
	}
	~Instuctor(){

	}
};
class Course{
private:
	string courseCode;
	string courseName;
	int maxStudents;
	Student* students;
	int currentStudents;
public:
	Course(string courseCode,string courseName,int maxStudents,Student* students,int currentStudents){
		this->courseCode = courseCode;
		this->courseName = courseName;
		this->maxStudents = maxStudents;
		this->students = students;
		this-> currentStudents = currentStudents;
	}
	void addStudents(const Student& s){
		if(currentStudents<maxStudents)
			currentStudents++;
		else
			cout<<"course is full";
	}
	void display(){
		cout<<"course Code: " << courseCode <<endl;
		cout<<"course Name: " << courseName <<endl;
		cout<<"max Students: " << maxStudents <<endl;
		cout<<"current Students: " << currentStudents <<endl;
		students->display();

	}
	~Course(){

	}
};








int main() {
	Student* omar = new Student( "Omar Nabil" , 2202 , 2 , "CS");
	Course* c = new Course("CS101","intro to Prog", 3 , omar , 1);
	Instuctor* I = new Instuctor("Dr . Lina khaled" , 456 , "Computer science" , 5);
	c->display();
	omar->display();
	I->display();


}

