#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d", &i);

    if (i <= 0 && i >= 8)
        printf("Please enter a valid number");
    else
    {
        switch (i)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        }
    }
    return 0;
}