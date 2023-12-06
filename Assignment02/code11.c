#include <stdio.h>
int main()
{
    int i, sum = 0, difference = 0;
    printf("Enter :");
    scanf("%d", &i);

    if (i < 1000)
        printf("Please Enter 5 digit number");

    else
    {
        int Onum = i;

        while (i != 0)
        {
            int n = i % 10;
            sum += n;
            difference = (i == Onum) ? n : difference - n;
            i = i / 10;
        }

        printf("%d", sum);
        printf("\n%d", difference);
    }
    return 0;
}