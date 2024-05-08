// C++ program to create a class for Employee to get and display following Employee information:
// Empcode, Basicsalary
// Write Member function to calculate Net salary
// DA=174% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary , if baic salary > 50000
// Income tax=0 , if Basic salary <= 50000
// Netsalary=(basic salary + da + hra + ta) – income tax

#include <iostream>
using namespace std;

class Employee
{
private:
    int empCode;
    float basicSalary;

public:
    Employee()
    {
        this->empCode = 0;
        this->basicSalary = 0.0;
    }

    void setDetail(int empCode, float basicSalary)
    {
        this->empCode = empCode;
        this->basicSalary = basicSalary;
    }

    float calculateNetSalary()
    {
        float DA = 1.74 * basicSalary;
        float HRA = 0.10 * basicSalary;
        float TA = 500;
        float incomeTax = (basicSalary > 50000) ? 0.05 * basicSalary : 0; // Conditional income tax

        float netSalary = (basicSalary + DA + HRA + TA) - incomeTax;
        return netSalary;
    }

    void display()
    {
        cout << endl;
        cout << "Employee Code: " << empCode << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << this->calculateNetSalary() << endl;
    }
};

int main()
{

    Employee empArray[5];
    for (int i = 0; i < 5; i++)
    {
        int code;
        float salary;
        cout << "Enter details for employee " << (i + 1) << ":" << endl;
        cout << "Enter Employee Code: ";
        cin >> code;
        cout << "Enter Basic Salary: ";
        cin >> salary;
        empArray[i].setDetail(code, salary);
    }

    for (int i = 0; i < 5; i++)
    {
        empArray[i].display();
    }
    return 0;
}
