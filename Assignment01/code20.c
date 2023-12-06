#include <stdio.h>
int main()
{
    float p,rate;
    int time;

    printf("Enter Principle :");
    scanf("%f",&p);

    printf("Enter Rate :");
    scanf("%f",&rate);

    printf("Enter time :");
    scanf("%d",&time);

    float SI = p*rate*time;
    printf("%.2f",SI);
    return 0;
}