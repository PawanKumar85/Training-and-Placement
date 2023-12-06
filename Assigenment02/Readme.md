# [Assignment_02](https://classroom.google.com/u/1/c/NjIyMTg5NDc5MTk0/a/NTI0MjExMTU5MjYz/details)

## Code01

_1 . Write a C program to find maximum between two numbers using conditional operator._

```
#include <stdio.h>
int max(int a,int b)
{
    return a > b ? a : b;
}
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);
    printf("Max = %d", max(a,b));
    return 0;
}
```

## Code02

_2. Write a C program to find maximum between three numbers using conditional operator._

```
#include <stdio.h>

int max(int a,int b)
{
    return a > b ? a : b;
}
int main()
{
    int a,b,c;
    printf("Enter A,B and C :");
    scanf("%d %d %d",&a,&b,&c);

    int max1 = max(a,b);
    int max2 = max(max1,c);

    printf("\n Max of 3 is %d",max2);

    return 0;
}
```

## Code03

_3. Write a C program to check whether a number is even or odd using conditional operator._

```
#include <stdio.h>

int isEven(int i)
{
    if(i%2 == 0)
        return 1;
    return 0;
}

int main()
{
    int i;
    printf("Enter Number :");
    scanf("%d",&i);

    if(isEven(i) == 1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
```

## Code04

_4. Write a C program to check whether year is leap year or not using conditional operator._

```
#include <stdio.h>
#include <conio.h>
int isLeap(int year)
{
    if((year%4 == 0 && year%100!=0) || (year%400 == 0))
        return 1;
    return 0;
}
int main()
{
    int year;
    printf("Enter Year :");
    scanf("%d",&year);

    if(isLeap(year) == 1)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
```

## Code05

_5. Write a C program to check whether character is an alphabet or not using conditional
operator._

```
#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c",&c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("Alphabat");
    else
        printf("Not a Alphabat");
    return 0;
}
```

## Code06

_6. Write a C program to swap two numbers using bitwise operator._

```
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("A = %d\nB = %d",a,b);
    return 0;
}
```

## Code07

_7. Write a C program to performs mathematical operations such as addition, subtraction,
multiplication, division etc on numerical values (constants and variables)._

```
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    printf("\nA + B = %d",a + b);
    printf("\nA - B = %d",a - b);
    printf("\nA * B = %d",a * b);
    printf("\nA / B = %d",a / b);
    printf("\nA %% B = %d",a % b);
    return 0;
}
```

## Code08

_8.  Write a C program A relational operator checks the relationship between two operands. 
If the relation is true, it returns 1; if the relation is false, it returns value 0._

```
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first operand: ");
    scanf("%d", &a);
    printf("Enter the second operand: ");
    scanf("%d", &b);

    printf("\nRelational Operator Results:\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n", a, b, a <= b);

    return 0;
}

```

## Code09

_9. An expression containing logical operator returns either 0 or 1 depending upon whether
expression results true or false. Logical operators are commonly used in decision making in C
programming._

```
#include <stdio.h>

int main() {
    int a;

    printf("Enter A :");
    scanf("%d",&a);

    if(a >= 0 && a <= 10)
        printf("A is greater than 0 and smaller than 10");
    else if(a>= 0 || a <= 10)
        printf("A is greater than 0 or smaller than 10");
    else if(!(a >= 0))
        printf("A is not greater than 0");
    return 0;
}

```

## Code10

_10. Write a C program to enter a four digit number and print all digit_

```
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
```

## Code11

_11. Write a C program to enter a five digit number and find sum and difference of all digit._

```
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
```

## Code12

_12. Write a C program to enter a five digit number and find sum and difference of 1st , 3rd , 5th
digit number._

````
#include <stdio.h>

int main()
{
    int i,sum = 0,diff = 0;
    printf("Enter :");
    scanf("%d",&i);

    if(i < 999)
        printf("Please enter 5 digit number");
    else
    {
        int first = i/10000;
        int third = (i%1000)/100;
        int fifth = i%10;

        sum = first + third + fifth;
        diff = first - third - fifth;
    }

    printf("Sum = %d\nDiff = %d",sum,diff);
}```
````
