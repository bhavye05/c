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

    // Open file for writing
    ofstream fout("student.txt");

    // Check output file
    if(!fout)
    {
        cout << "Error creating file";
        return 0;
    }

    // Store records
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter Roll No: ";
        cin >> s[i].rollno;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Class: ";
        getline(cin, s[i].sclass);

        cout << "Enter Year: ";
        cin >> s[i].year;

        cout << "Enter Total Marks: ";
        cin >> s[i].marks;

        cin.ignore();

        // Write to file
        fout << s[i].rollno << endl;
        fout << s[i].name << endl;
        fout << s[i].sclass << endl;
        fout << s[i].year << endl;
        fout << s[i].marks << endl;
    }

    fout.close();

    // Open file for reading
    ifstream fin("student.txt");

    // Check input file
    if(!fin)
    {
        cout << "Error opening file";
        return 0;
    }

    cout << "\n\nStudent Records\n";

    // Read records
    for(int i = 0; i < 5; i++)
    {
        fin >> s[i].rollno;
        fin.ignore();

        getline(fin, s[i].name);
        getline(fin, s[i].sclass);

        fin >> s[i].year;
        fin >> s[i].marks;
        fin.ignore();

        // Display records
        cout << "\nRoll No: " << s[i].rollno;
        cout << "\nName: " << s[i].name;
        cout << "\nClass: " << s[i].sclass;
        cout << "\nYear: " << s[i].year;
        cout << "\nTotal Marks: " << s[i].marks << endl;
    }

    fin.close();

    return 0;
}
