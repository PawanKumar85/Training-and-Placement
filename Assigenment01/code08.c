#include <stdio.h>
int main()
{
    int days;
    printf("Numbers of Days :");
    scanf("%d",&days);

    int years = days/365;
    int weeks = (days%365)/7;
    int day = ((days%365))%7;

    printf("Years : %d",years);
    printf("\nweeks : %d",weeks);
    printf("\ndays : %d",day);
    return 0;
}