#include <iostream>
using namespace std;

template <typename T>

class Student{
    string student_name;
    T total_marks;

    public:
    Student();
    Student(string n,T m)
    {
        student_name = n;
        total_marks = m;
    }

    void print()
    {
        cout << "Student Name : " << student_name << endl;
        cout << "Total Marks : " << total_marks << endl;
    }
};

template <typename T,typename U>

void findMax(T x,U y)
{
    T z = (x > y) ? x : y;
    cout << z << endl;
}


int main()
{
    
    findMax(10,30);
    findMax(10.9,30.6);
    
    return 0;
}