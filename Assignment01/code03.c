#include <stdio.h>
int main()
{
    int emp_ID;
    int working_hr;
    float salary;

    printf("Input the Employees ID :");
    scanf("%d",&emp_ID);

    printf("Input the working Hours :");
    scanf("%d",&working_hr);

    printf("Salary Amount/hr :");
    scanf("%f",&salary);

    printf("Employees ID : %d\n",emp_ID);
    printf("Salary : $ %.2f",working_hr * salary);

    return 0;
}