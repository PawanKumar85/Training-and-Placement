#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int i = n%10;
        n = n/10;
        sum *= i;
    }
    printf("Sum = %d",sum);
    return 0;
}