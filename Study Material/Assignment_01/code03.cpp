//  WAP to display addition, subtraction, multiplication and division of two integers on screen

#include <iostream>
#include <stdexcept>
using namespace std;

class Calculate
{
    int a;
    int b;

public:
    void addition(int a, int b)
    {
        cout << a + b << endl;
    }
    void subtration(int a, int b)
    {
        cout << a - b << endl;
    }
    void multiplication(int a, int b)
    {
        cout << a * b << endl;
    }
    void divison(int a, int b)
    {
        try
        {
            int ans = a / b;
            cout << ans << endl;
        }
        catch (const exception &e)
        {
            cout << e.what() << endl;
        }
    }
};

void menu(int choice, int a, int b)
{
    Calculate c;
    switch (choice)
    {
    case 1:
        c.addition(a, b);
        break;
    case 2:
        c.subtration(a, b);
        break;
    case 3:
        c.multiplication(a, b);
        break;

    case 4:
        c.divison(a, b);
        break;

    default:
        cout << "Invalid choice" << endl;
    }
}

int main()
{
    int a, b;
    cout << "Enter A and B :";
    cin >> a >> b;

    int choice;
    cout << "Enter your choice : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtration" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Divison" << endl;
    cout << "Enter : ";
    cin >>  choice;

    menu(choice, a, b);
    return 0;
}