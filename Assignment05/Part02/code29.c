#include <stdio.h>
#include <math.h>

void primeFactors(int n)
{
    printf("Prime factors of %d are: ", n);

    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }
    int i;
    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        printf("%d", n);
    }
    
}

int main()
{
    int n1;
    printf("Enter a n1: ");
    scanf("%d", &n1);
    primeFactors(n1);

    return 0;
}
