#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float root1,root2;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d %d %d",&a,&b,&c);

    d = pow(b,2) - (4 * a * c);

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f\nRoot2 = %.2f",root1,root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);
        printf("Root1 = %.2f",root1);
    }
    else
    {
        float realNumber = -b / (2 * a);
        float imaginaryNumber = sqrt(-d) / (2 * a);
        printf("Real Number = %.2f\nImaginary Number = %.2f",realNumber,imaginaryNumber);
    }
    return 0;
}