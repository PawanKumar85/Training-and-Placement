// Write a program to print the area of a rectangle by creating a class named 'Area' having one 
// function. Length and breadth of the rectangle are entered through keyboard using 
// Parameterized constructor. 

#include <iostream>
using namespace std;

class Area{
    float length;
    float breath;
    float area;

    public:
    Area(float length,float breath)
    {
        this->length  = length;
        this->breath = breath;
        this->area = length * breath;
    }

    void print()
    {
        cout << "Area :" << area << endl;
    }
};

int main()
{
    Area a(10,20);
    a.print();

    return 0;
}