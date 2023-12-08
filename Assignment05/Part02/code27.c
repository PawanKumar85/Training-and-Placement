#include <stdio.h>
#include <stdbool.h>

int isPrime(int a)
{
    if (a <= 1)
        return false;

    int i = 2;
    while (i * i <= a)
    {
        if (a % i == 0)
            return false;
        
        i++;
    }

    return true;
}
int main()
{
    int n;
    printf("Enter Upper Limit :");
    scanf("%d", &n);

    int i;
    for(i = 1;i<=n;i++)
    {
        if(isPrime(i))
            printf("%d is Prime number \n",i);
    }
    

    return 0;
}