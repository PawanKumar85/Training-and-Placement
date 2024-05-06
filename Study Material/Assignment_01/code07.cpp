// Write a C++ program to create a class for student to get and print details of a student. Following are the details of 
// a student:
// Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark
// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student

#include <iostream>
using namespace std;

class Student{
    int student_id;
    string name;
    string branch;
    int subject[5];

    public:
    void getData(int student_id,string name,string branch,int arr[])
    {
        this->branch = branch;
        this->name = name;
        this->student_id = student_id;
        for(int i=0;i<5;i++)
        {
            this->subject[i] = arr[i];
        }
    }

    void print()
    {
        cout << name << endl;
        cout << student_id << endl;

    }


};
int main()
{
    Student a1;
    int arr[5];
    for(int i = 0;i < 5;i++)
    {
        cout << "Subject " << i + 1 << " Marks : ";
        cin >> arr[i];
        cout << endl;
    }

    a1.getData(101,"Pawan Kumar","CSE",arr);
    `fddvndkl ${vagr} `
    return 0;
}