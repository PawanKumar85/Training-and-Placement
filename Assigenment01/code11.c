#include <stdio.h>
#include <math.h>

int main()
{
    float p, rate;
    int time;

    printf("Enter Principle : ");
    scanf("%f", &p);

    printf("Enter Time :");
    scanf("%d", &time);

    printf("Enter Rate :");
    scanf("%f", &rate);

    float res = 1 + rate / 100;
    float CI = p * pow(res, time);

    printf("%.2f", CI);
}