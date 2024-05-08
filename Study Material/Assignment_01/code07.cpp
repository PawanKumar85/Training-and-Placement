// Write a C++ program to create a class for student to get and print details of a student. Following are the details of
// a student:
// Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark
// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student

#include <iostream>
using namespace std;

class Student
{
    int student_id;
    string name;
    string branch;
    int subject[5];
    int total;
    float percentage;

public:
    void getData(int student_id, string name, string branch, int arr[])
    {
        this->branch = branch;
        this->name = name;
        this->student_id = student_id;
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            this->subject[i] = arr[i];
            sum += arr[i];
        }
        total = sum;
        percentage = (float)sum / 5;
    }

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Student :" << student_id << endl;
        cout << "branch : " << branch << endl;
        cout << "student id : " << student_id << endl;
        cout << "total Makrs :" << total << endl;
        cout << "Percentage :" << percentage << "%" << endl;
    }
};
int main()
{
    Student a1;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " Marks : ";
        cin >> arr[i];
        cout << endl;
    }

    a1.getData(101, "Pawan Kumar", "CSE", arr);

    a1.print();

    return 0;
}