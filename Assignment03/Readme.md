# [Assignment_03](https://classroom.google.com/u/1/c/NjIyMTg5NDc5MTk0/a/NjIyNjM1NjM0MDgx/details)

## [Code-01](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code01.c)

_1. Write a C program to check whether a number is negative, positive or zero._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i < 0)
        printf("Negative Number");
    else if(i == 0)
        printf("Zero");
    else if( i > 0)
        printf("Positive Number");
    return 0;
}
```

## [Code-02](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code02.c)

_2. Write a C program to check whether a number is divisible by 5 and 11 or not._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i%5 == 0 && i%11 == 0)
        printf("%d is divisible by both 5 and 11",i);
    else if(i%5 == 0)
        printf("%d is only divisible by 5",i);
    else
        printf("%d is only divisible by 11",i);
    return 0;
}
```

## [Code-03](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code03.c)

_3. Write a C program to check whether a number is even or odd._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i%2 == 0)
        printf("%d is Even",i);
    else
        printf("%d is Odd",i);

    return 0;
}
```

## [Code-04](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code04.c)

_4. Write a C program to input any character and check whether it is alphabet, digit or special character._

```
#include <stdio.h>
int main()
{
    char c;
    printf("Enter :");
    scanf("%c",&c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("%c is Character",c);
    else if(c>=48 && c <= 57)
        printf("%c is Number",c);
    else if((c >= 32 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <=125))
        printf("%c is special Character",c);
    else
        printf("No Define");

    return 0;
}
```

## [Code-05](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code05.c)

_5. Write a C program to check whether a character is uppercase or lowercase alphabet._

```
#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c",&c);

    if(c >= 65 && c <= 90)
        printf("Upper Case");
    else if(c >= 97 && c <= 122)
        printf("Lower Case");

    return 0;
}
```

## [Code-06](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code06.c)

_6. Write a C program to print the English word of a digit like (One, Two,Three,......,Nine) if Digit is between 1 to 9,Otherwise tell whether its Even or Odd if Digit is greater than 9._

```
#include <stdio.h>
int main()
{
    char character[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int i;
    printf("Enter Number :");
    scanf("%d", &i);
    if (i >= 0 && i <= 9)
        printf("%s", character[i]);
    else
        printf("Please enter the number between between the range of 0 to 9");
    return 0;
}
```

## [Code-07](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code07.c)

_7. Write a C program to enter month number and print total number of days in month. (Excluding Leap
Year)_

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

## [Code-08](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code08.c)

_8. Write a C program to input angles of a triangle and check whether triangle is valid or not._

```
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter angles of triangle :");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180)
        printf("Valid Triangle");
    else
        printf("Not a Valid Triangle");
    return 0;
}
```

## [Code-10](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code10.c)

_10. Write a C program to calculate the Area of two rectangles and print the length and breadth of the
rectangle whose Area is greater._

```
#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int l1, l2, b1, b2;
    printf("Enter Length and Breath of Rectangle 01 :");
    scanf("%d %d", &l1, &b1);

    printf("Enter Length and Breath of Rectangle 02 :");
    scanf("%d %d", &l2, &b2);

    int area1 = l1 * b1;
    int area2 = l2 * b2;

    if (area1 > area2)
    {
        printf("Area of Greater Rectangle = %d\nlength = %d\nbreath = %d",area1,l1, b1);
    }
    else
    {
        printf("Area of Greater Rectangle = %d\nlength = %d\nbreath = %d", area2,l2, b2);
    }

    return 0;
}
```

## [Code-11](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code11.c)

_11.Write a C program to find all roots of a quadratic equation._

```
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float root1,root2;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d %d %d",&a,&b,&c);

    d = pow(b,2) - (4 * a * c);

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f\nRoot2 = %.2f",root1,root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);
        printf("Root1 = %.2f",root1);
    }
    else
    {
        float realNumber = -b / (2 * a);
        float imaginaryNumber = sqrt(-d) / (2 * a);
        printf("Real Number = %.2f\nImaginary Number = %.2f",realNumber,imaginaryNumber);
    }
    return 0;
}
```

## [Code-12](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code12.c)

_12. Write a C program to check whether triangle is equilateral, scalene or isosceles Input: all sides Length_

```
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A,B and C :");
    scanf("%d %d %d",&a,&b,&c);

    if((a == b) && (b == c))
        printf("Equilateral Triangle");
    else if((a == b) || (a == c) || (b == c))
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
    return 0;
}
```

## [Code-13](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code13.c)

_13. Write a C program to input electricity unit charges and calculate total electricity bill according to the
given_

_Conditions_

- For first 50 units Rs. 0.50/unit
- For next 100 units Rs. 0.75/unit
- For next 100 units Rs. 1.20/unit
- For unit above 250 Rs. 1.50/unit

_An additional surcharge of 20% is added to the bill_

```

#include <stdio.h>
int main()
{
    float units,bill;
    printf("Input electricity unit :");
    scanf("%f",&units);

     if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    bill += 0.20 * bill;

    printf("Total electricity Bill = %.2f",bill);
    return 0;
}
```

## [Code-14](https://github.com/pawan6307032/Training-and-Placement/blob/main/Assignment03/code14.c)

_14. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer._

_Conditions:_

- Percentage &gt;= 90% : Grade A
- Percentage &gt;= 80% : Grade B
- Percentage &gt;= 70% : Grade C
- Percentage &gt;= 60% : Grade D
- Percentage &gt;= 40% : Grade E
- Percentage &lt; 40% : Grade F

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i & 1)
        printf("%d is Odd number",i);
    else
        printf("%d is Even Number",i);
    return 0;
}
```








