#include <stdio.h>
int main()
{
    int n,power,i,res = 1;
    printf("Enter Base :");
    scanf("%d",&n);

    printf("Enter Exponand :");
    scanf("%d",&power);

    for(i = 0;i<power;i++)
        res = res * n;
    
    printf("%d ^ %d = %d",n,power,res);
    return 0;
}