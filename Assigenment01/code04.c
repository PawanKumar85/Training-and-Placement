#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float radius;
    printf("Input the Radius of the sphere :");
    scanf("%f",&radius);

    float volume = (4/3) * pi * pow(radius,3);
    printf("\nVolume of the sphere : %.2f",volume);
    return 0;
}