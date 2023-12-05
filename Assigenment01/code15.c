#include <stdio.h>
int main()
{
    float wt1,wt2;
    int item01,item02;
    printf("Weight - Item 01 :");
    scanf("%f",&wt1);

    printf("Number of items :");
    scanf("%d",&item01);

    printf("Weight - Item 02 :");
    scanf("%f",&wt2);

    printf("Number of items :");
    scanf("%d",&item02);

    float res = ((wt1 * item01) + (wt2 * item02))/(item01 + item02);
    printf("Average Value : %.2f",res);
    return 0;
}