#include <iostream>
using namespace std;

class Person
{
public:

    string name;

    virtual void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:

    string course;
    int marks, year;

    void display()
    {
        cout << "\nStudent Details\n";

        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person
{
public:

    string department;
    int salary;

    void display()
    {
        cout << "\nEmployee Details\n";

        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s;
    Employee e;

    Person *p;

    // Student data
    s.name = "Rahul";
    s.course = "BCA";
    s.marks = 85;
    s.year = 2024;

    // Employee data
    e.name = "Aman";
    e.department = "IT";
    e.salary = 50000;

    // Runtime Polymorphism
    p = &s;
    p->display();

    p = &e;
    p->display();

    return 0;
}