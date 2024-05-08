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
    Employee(int code, float salary)
    {
        this->empCode = code;
        this->basicSalary = salary;
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
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};

int main()
{

    Employee emp1(1234, 60000);
    emp1.display();

    Employee emp2(85440, 10000);
    emp2.display();
    return 0;
}
