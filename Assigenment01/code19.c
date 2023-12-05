#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter Fahrenheit (F) :");
    scanf("%f",&f);

    c = 5/9 * (f - 32);
    printf("%.2f",c);
    return 0;
}