#include <stdio.h>
int main()
{
    int choice;
    int a, b;
    printf("Menu\n");
    printf("1. Addition\n2. subtraction\n3. Division\n4. Multiplication\n5.Modules");

    printf("\nEnter Choice :");
    scanf("%d", &choice);

    if (choice > 0 && choice < 6)
    {

        printf("Enter A and B :");
        scanf("%d %d", &a, &b);

        switch (choice)
        {
        case 1:
            printf("Result = %d", a + b);
            break;
        case 2:
            printf("Result = %d", a - b);
            break;
        case 3:
            printf("Result = %d", a / b);
            break;
        case 4:
            printf("Result = %d", a * b);
            break;
        case 5:
            printf("Result = %d", a % b);
            break;
        }
    }
    else
        printf("Please enter a valid choice");
    return 0;
}