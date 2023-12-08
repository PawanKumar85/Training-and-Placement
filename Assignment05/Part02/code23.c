#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    printf("Factorial of %d : %d", n, factorial(n));
    return 0;
}