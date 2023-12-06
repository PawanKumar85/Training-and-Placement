#include <stdio.h>
int main()
{
    int a[5],i,sum = 0;

    for(i = 0;i<5;i++)
    {
        printf("Enter Subject %d :",i +1);
        scanf("%d",&a[i]);
        sum += a[i];
    }   
    float percentage = (sum * 100)/500;
    printf("%.2f %%",percentage);

    printf("\n");
    if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 70)
        printf("Grade C");
    else if(percentage >= 60)
        printf("Grade D");
    else if(percentage >= 40)
        printf("Grade E");
    else
        printf("Grade F");
    

    return 0;
}