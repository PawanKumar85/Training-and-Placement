#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a)
{
    if(a <= 1)
        return false;
    
    int i = 2;
    while(i * i <= a)
    {
        if(a % i == 0)
            return false;
        
        i++;
    }

    return true;  
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}