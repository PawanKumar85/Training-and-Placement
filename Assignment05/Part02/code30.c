#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int a)
{
    int original = a;
    int sum = 0;

    while(a != 0)
    {
        int n1 = a%10;
        sum += (n1 * n1 * n1);
        a = a/10;
    }

    if(original == sum)
        return  true;
    else
        return false;
}
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    if(isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not a Armstrong");
}