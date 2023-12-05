#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("Enter side :");
    scanf("%f",&a);

    float area = sqrt(3)/4 * pow(a,2);
    printf("Area of Equilateral Triangle : %.2f",area);
    return 0;
}