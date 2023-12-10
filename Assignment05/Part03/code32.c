#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n ? true : false;
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    if(isPerfect(n))
        printf("Perfect");
    else
        printf("Not a Perfect");

    return 0;
}