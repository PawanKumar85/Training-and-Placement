// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First
// function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second
// function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered
// through keyboard.

#include <iostream>
using namespace std;

class Area
{
    float length;
    float breath;

public:
    void setDim(float length, float breath)
    {
        this->length = length;
        this->breath = breath;
    }
    float getArea()
    {
        return this->length * this->breath;
    }

    void print()
    {
        cout << "Area of rectangle is " << getArea() << endl;
    }
};

int main()
{
    Area A1,A2;
    A1.setDim(10,20);
    A2.setDim(19,10);

    cout << A1.getArea() << endl;
    cout << A2.getArea() << endl;
    return 0;
}