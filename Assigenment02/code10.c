#include <stdio.h>
int main()
{
    int i;
    printf("Enter Number (Length is 4) :");
    scanf("%d", &i);

    if (i <= 1000)
        printf("Please enter 4 digit Number");
    else
    {
        while (i != 0)
        {
            int n = i%10;
            i = i/10;
            printf("%d\t",n);
        }
    }

    return 0;
}