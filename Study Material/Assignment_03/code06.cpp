//  C++ program to create a class for Employee to get and display following Employee information:
// Empcode,Emp name, Basicsalary
// Count the created objects using static member.

#include <iostream>
using namespace std;
class Employee
{
private:
    int empCode;
    double basicSalary;

public:
    Employee(int code, double salary) : empCode(code), basicSalary(salary) {}
    void displayEmployee()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
    static void countObjects()
    {
        cout << "Number of created objects: " << numObjects << endl;
    }
    static int numObjects;
};
int Employee::numObjects = 0;

int main()
{
    Employee employee1(101, 50000.0);
    Employee employee2(102, 60000.0);
    Employee employee3(103, 70000.0);
    Employee employee4(104, 80000.0);
    employee1.numObjects++;
    employee2.numObjects++;
    employee3.numObjects++;
    employee4.numObjects++;
    employee1.displayEmployee();
    employee2.displayEmployee();
    employee3.displayEmployee();
    employee4.displayEmployee();
    Employee::countObjects();

    return 0;
}