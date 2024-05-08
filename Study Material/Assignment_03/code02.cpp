// WAP to display addition, subtraction, multiplication and division of two integers on screen.
//  Declare Class Calculation
//  Write Parameterized constructor for initialize num1 and num2
// Write member function for each operation.

#include <iostream>

using namespace std;

class Calculation
{
private:
    int num1, num2;

public:
    Calculation(int a, int b)
    {
        num1 = a;

        num2 = b;
    }
    int addition()
    {
        return num1 + num2;
    }
    int subtraction()
    {
        return num1 - num2;
    }
    int multiplication()
    {
        return num1 * num2;
    }
    int division()
    {
        if (num2 == 0)
            cout << "divide by Zero error" << endl;
        else
            return num1 / 2;
    }
};

int main()
{
    Calculation c(10,20);
    cout << "Addition is : " << c.addition() << endl;
    cout << "Subtraction is : " << c.subtraction() << endl;
    cout << "Multiplication is : " << c.multiplication() << endl;
    cout << "Division is : " << c.division() << endl;
}