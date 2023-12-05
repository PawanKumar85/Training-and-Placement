#include <stdio.h>
int main()
{
    int distance;
    float fuel;

    printf("Input total distance in KM :");
    scanf("%d",&distance);

    printf("Input fuel spend in liter :");
    scanf("%f",&fuel);

    printf("Average Consumption : %.2f",distance/fuel);
    return 0;
}