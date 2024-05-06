// Write a C++ program to create a class for student to get and print details of a student. Following are the details
// of a student:
// Studid, name ,sem, branch
#include <iostream>
using namespace std;

class Student
{
    int Studin;
    string name;
    int sem;
    string branch;

public:
    Student(int Studin, string name, int sem, string branch)
    {
        this->Studin = Studin;
        this->name = name;
        this->sem = sem;
        this->branch = branch;
    }

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Student ID : " << Studin << endl;
        cout << "Semester : " << sem << endl;
        cout << "Brach : " << branch << endl;
    }
};

int main()
{
    Student s1(101, "Abhishek", 5, "CSE");
    s1.print();
    return 0;
}