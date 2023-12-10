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
    int n1,n2,i;
    printf("Enter Lower Limit :");
    scanf("%d", &n1);

    printf("Enter Upper Limit:");
    scanf("%d", &n2);

    for (i = n1; i < n2; i++)
    {
        if (isPerfect(i))
            printf("\n%d is Perfect",i);
    }

    return 0;
}