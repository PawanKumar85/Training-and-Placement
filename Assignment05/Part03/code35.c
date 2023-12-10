#include <stdio.h>
#include <stdbool.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

bool isStrong(int n)
{
    int original = n;
    int res = 0;
    while (n != 0)
    {
        int n1 = n % 10;
        res += factorial(n1);
        n /= 10;
    }

    return res == original ? true : false;
}

int main()
{
    int n;
    printf("Enter Upper Limit:");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        if (isStrong(i))
            printf("\n%d is Strong", i);
    }
    return 0;
}