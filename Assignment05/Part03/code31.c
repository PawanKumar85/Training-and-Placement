#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int a)
{
    int original = a;
    int sum = 0;

    while (a != 0)
    {
        int n1 = a % 10;
        sum += (n1 * n1 * n1);
        a = a / 10;
    }

    return original == sum ? true : false;
}
int main()
{
    int n1, n2;
    printf("Enter Lower Limit :");
    scanf("%d", &n1);

    printf("Enter Upper Limit :");
    scanf("%d", &n2);
    int i;
    for (i = n1; i < n2; i++)
    {
        if (isArmstrong(i))
            printf("%d is Armstrong Number.\n", i);
    }
}