# [Assignment_04](https://classroom.google.com/u/1/c/NjIyMTg5NDc5MTk0/a/NTI0MzIxMDM4ODI3/details)

## [Code-01](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code01.c)

_1. Write a C program to print day of week name using switch case._

```
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
```

## [Code-02](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code02.c)

_2. Write a C program print total number of days in a month using switch case._

```
#include <stdio.h>
int main()
{
    char month[][5] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    int i;
    printf("Enter Month :");
    scanf("%d",&i);

    switch(i)
    {
        case 1: case 3: case 5: case 7 : case 8 : case 10 : case 12:
            printf("%s with 31 days",month[i-1]);
        break;
        case 4:case 6:case 9: case 11:
            printf("%s with 30 days",month[i - 1]);
        break;
        case 2:
            printf("%s with 28 or 29 days(leap year)",month[i - 1]);
        break;
        default :
            printf("Please enter a valid month");
    }
    return 0;
}
```

## [Code-03](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code03.c)

_3. Write a C program to check whether an alphabet is vowel or consonant using switch case._

```
#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        switch (c)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is vowel",c);
        break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is vowel",c);
        break;
        default:
            printf("%c is consonant",c);
        }
    }
    return 0;
}
```

## [Code-04](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code04.c)

_4. Write a C program to find maximum between two numbers using switch case._

```
#include <stdio.h>

int max(int a,int b)
{
    if(a > b)
        return 1;
    return 0;
}
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    int maxi = max(a,b);

    switch(maxi)
    {
        case 0 :
            printf("B is greater than A");
            break;
        case 1 :
            printf("A is greater than B");
            break;
        default:
            printf("Nothing");
    }
    return 0;
}
```

## [Code-05](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code05.c)

_5. Write a C program to check whether a number is even or odd using switch case._

```
#include <stdio.h>

int isEven(int i)
{
    if(i%2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int res = isEven(i);

    switch(res)
    {
        case 0 : printf("%d is Odd",i); break;
        case 1 : printf("%d is Even",i); break;
        default :printf("Nothing");
    }
    return 0;
}
```

## [Code-06](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code06.c)

_6. Write a C program to check whether a number is positive, negative or zero using switch case._

```
#include <stdio.h>
char check(int i)
{
    if(i > 0)
        return 'p';
    else if(i == 0)
        return 'z';
    else
        return 'n';
}
int main()
{
    char c;
    int i;
    printf("Enter :");
    scanf("%d",&i);

    char res = check(i);

    switch(res)
    {
        case 'p' : printf("Positive Number"); break;
        case 'z' : printf("Zero"); break;
        case 'n' : printf("Negative number"); break;
        default : printf("Norhing");
    }
    return 0;
}
```

## [Code-07](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code07.c)

_7. Write a C program to find roots of a quadratic equation using switch case._

```
#include <stdio.h>
#include <math.h>

char des(int a, int b, int c)
{
    int d = pow(b, 2) - (4 * a * c);
    if (d > 0)
        return 'p';
    else if (d == 0)
        return 'z';
}

int main()
{
    int a, b, c, d;
    float root1, root2;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d %d %d", &a, &b, &c);

    char res = des(a, b, c);


    switch (res)
    {
    case 'p':
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f\nRoot2 = %.2f", root1, root2);
        break;

    case 'z':
        root1 = -b / (2 * a);
        printf("Root1 = %.2f", root1);
        break;

    default:
        printf("Nothing");
    }
    return 0;
}

```

## [Code-08](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment04/code08.c)

_8. Write a C program to create Simple Calculator using switch case._

```
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
```
