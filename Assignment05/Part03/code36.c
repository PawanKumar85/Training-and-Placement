#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    printf("%d",fibonacci(n));

    return 0;
}