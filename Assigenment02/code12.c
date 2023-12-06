#include <stdio.h>

int main()
{
    int i,sum = 0,diff = 0;
    printf("Enter :");
    scanf("%d",&i);

    if(i < 999)
        printf("Please enter 5 digit number");
    else
    {
        int first = i/10000;
        int third = (i%1000)/100;
        int fifth = i%10;

        sum = first + third + fifth;
        diff = first - third - fifth;
    }

    printf("Sum = %d\nDiff = %d",sum,diff);
}