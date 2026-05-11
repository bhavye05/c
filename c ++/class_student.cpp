#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:

    int rollno;
    string name;
    string sclass;
    int year;
    float marks;
};

int main()
{
    Student s[5];

    ofstream fout("student.txt");

    // Store records
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter Roll No: ";
        cin >> s[i].rollno;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Class: ";
        cin >> s[i].sclass;

        cout << "Enter Year: ";
        cin >> s[i].year;

        cout << "Enter Marks: ";
        cin >> s[i].marks;

        fout << s[i].rollno << " "
             << s[i].name << " "
             << s[i].sclass << " "
             << s[i].year << " "
             << s[i].marks << endl;
    }

    fout.close();

    ifstream fin("student.txt");

    cout << "\nStudent Records\n";

    // Read records
    for(int i = 0; i < 5; i++)
    {
        fin >> s[i].rollno
            >> s[i].name
            >> s[i].sclass
            >> s[i].year
            >> s[i].marks;

        cout << "\nRoll No: " << s[i].rollno;
        cout << "\nName: " << s[i].name;
        cout << "\nClass: " << s[i].sclass;
        cout << "\nYear: " << s[i].year;
        cout << "\nMarks: " << s[i].marks << endl;
    }

    fin.close();

    return 0;
}