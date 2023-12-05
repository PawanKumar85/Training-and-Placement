#include <stdio.h>
int main()
{
    int a[5],sum = 0,i;

    for(i = 0;i<5;i++)
    {
        printf("Enter Subject %d : ",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }

    int average = sum/5;
    float percentage = (sum*100)/500;
    printf("Total : %d",sum);
    printf("\nAverage : %d",average);
    printf("\nPercentage : %.2f",percentage);
    return 0;
}