# Assignment-01
## Code-01

1. Write a C program to print your name, date of birth. and mobile number.

```
#include <stdio.h>
int main()
{
    char name[100];
    char dob[20];
    char mobile[11];

    printf("Enter Name :");
    scanf("%s",name);

    printf("Enter DOB :");
    scanf("%s",dob);

    printf("Enter Mobile :");
    scanf("%s",mobile);

    printf("%s\n",name);
    printf("%s\n",dob);
    printf("%s",mobile);
    return 0;
}
```

## Code-02

2. Write a C program to read and display all type of variables.

```
#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a string: ");
    scanf("%s", str);

    printf("%d\n", i);
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%c\n", c);
    printf("%s\n", str);
    return 0;
}

```

## Code-03

3. Write a C program that accepts an employees ID, total worked hours of a month and the amount he received per hour. Print the employees ID and salary (with two decimal places) of a particular month.

```
#include <stdio.h>
int main()
{
    int emp_ID;
    int working_hr;
    float salary;

    printf("Input the Employees ID :");
    scanf("%d",&emp_ID);

    printf("Input the working Hours :");
    scanf("%d",&working_hr);

    printf("Salary Amount/hr :");
    scanf("%f",&salary);

    printf("Employees ID : %d\n",emp_ID);
    printf("Salary : $ %.2f",working_hr * salary);

    return 0;
}
```

## Code-04

4. Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)

```
#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float radius;
    printf("Input the Radius of the sphere :");
    scanf("%f",&radius);

    float volume = (4/3) * pi * pow(radius,3);
    printf("\nVolume of the sphere : %.2f",volume);
    return 0;
}
```

## Code-05

5. Write a C program that converts kilometers per hour to miles per hour. (1 KM = 0.621371 M)

```
#include <stdio.h>
int main()
{
    float kmph,mph;
    printf("Input kilometer per hour :");
    scanf("%f",&kmph);

    mph = kmph * .621371;
    printf("%f miles per hours",mph);
    return 0;
}
```

## Code-06

6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.

```
#include <stdio.h>
int main()
{
    int min;
    printf("Input minutes :");
    scanf("%d",&min);

    int hours = min/60;
    int mins = (min - hours * 60);
    printf("%d hrs: ",hours);
    printf("%d mins",mins);
    return 0;
}
```

## Code-07

7. Write a C program to find the third angle of a triangle if two angles are given.

```
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Angles of A and B :");
    scanf("%d %d",&a,&b);

    c = 180 - (a + b);
    printf("%d",c);
    return 0;
}
```

## Code-08

8. Write a C program to convert specified days into years, weeks and days.

```
#include <stdio.h>
int main()
{
    int days;
    printf("Numbers of Days :");
    scanf("%d",&days);

    int years = days/365;
    int weeks = (days%365)/7;
    int day = ((days%365))%7;

    printf("Years : %d",years);
    printf("\nweeks : %d",weeks);
    printf("\ndays : %d",day);
    return 0;
}
```

## Code-09

9. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

```
#include <stdio.h>
int main()
{
    int note;
    printf("Input the Amount :");
    scanf("%d", &note);

    int hundreds = note / 100;
    int fifty = (note % 100) / 50;         // (hundreds%100)/50
    int twenty = ((note % 100) % 50) / 20; // (fifty%50)/20
    int ten = (((note % 100) % 50) % 20) / 10;
    int five = ((((note % 100) % 50) % 20) % 10) / 5;
    int two = (((((note % 100) % 50) % 20) % 10) % 5) / 2;
    int one = ((((((note % 100) % 50) % 20) % 10) % 5) % 2);

    printf("%d Notes of 100.00", hundreds);
    printf("\n%d Notes of 50.00", fifty);
    printf("\n%d Notes of 20.00", twenty);
    printf("\n%d Notes of 10.00", ten);
    printf("\n%d Notes of 5.00", five);
    printf("\n%d Notes of 2.00", two);
    printf("\n%d Notes of 1.00", one);
    return 0;
}
```

## Code-10

10. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

```
#include <stdio.h>
int main()
{
    int second;
    printf("Input the second :");
    scanf("%d",&second);

    int hr = second/3600;
    int min = (second%3600)/60;
    int sec = (second%3600) % 60;

    printf("H : M : S\n%d : %d : %d",hr,min,sec);
    return 0;
}
```

## Code-11

11. C program to calculate Compound Interest

```
#include <stdio.h>
#include <math.h>

int main()
{
    float p, rate;
    int time;

    printf("Enter Principle : ");
    scanf("%f", &p);

    printf("Enter Time :");
    scanf("%d", &time);

    printf("Enter Rate :");
    scanf("%f", &rate);

    float res = 1 + rate / 100;
    float CI = p * pow(res, time);

    printf("%.2f", CI);
}
```

## Code-12

12. C program to calculate total average and percentage of five subjects

```
#include <stdio.h>
int main()
{
    int a[5],sum = 0,i;

    for(i = 0;i<5;i++)
    {
        printf("Enter Subject %d : ",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }

    int average = sum/5;
    float percentage = (sum*100)/500;
    printf("Total : %d",sum);
    printf("\nAverage : %d",average);
    printf("\nPercentage : %.2f",percentage);
    return 0;
}
```

## Code-13

13. C program to find area of an equilateral triangle

```
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("Enter side :");
    scanf("%f",&a);

    float area = sqrt(3)/4 * pow(a,2);
    printf("Area of Equilateral Triangle : %.2f",area);
    return 0;
}
```

## Code-14

14. Write a C program to print the following characters in a reverse     way.

```
#include <stdio.h>
int main()
{
    char a[] = {'X','M','L'};
    int n = sizeof(a)/sizeof(char);
    int i;
    for(i = n - 1;i>=0;i--)
        printf("%c ",a[i]);
    return 0;
}
```

## Code-15

15. Write a C program that accepts two item’s weight (floating points values ) and number of purchase (floating points values) and calculate the average value of the items.

```
#include <stdio.h>
int main()
{
    float wt1,wt2;
    int item01,item02;
    printf("Weight - Item 01 :");
    scanf("%f",&wt1);

    printf("Number of items :");
    scanf("%d",&item01);

    printf("Weight - Item 02 :");
    scanf("%f",&wt2);

    printf("Number of items :");
    scanf("%d",&item02);

    float res = ((wt1 * item01) + (wt2 * item02))/(item01 + item02);
    printf("Average Value : %.2f",res);
    return 0;
}
```

## Code-16

16. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

```
#include <stdio.h>
int main()
{
    int distance;
    float fuel;

    printf("Input total distance in KM :");
    scanf("%d",&distance);

    printf("Input fuel spend in liter :");
    scanf("%f",&fuel);

    printf("Average Consumption : %.2f",distance/fuel);
    return 0;
}
```

## Code-17

17. Write a C program to calculate the distance between the two points.

```
#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    float res;

    printf("Enter x1 x2 y1 and y2 :");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

    res = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("%.2f",res);
    return 0;
}
```

## Code-18

18. Write a C program to Swap two Numbers Without Using temporary variable.

```
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A = %d \nB = %d",a,b);
    return 0;
}
```

## Code-19

19. C program to convert temperature from Fahrenheit to Celsius.

```
#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter Fahrenheit (F) :");
    scanf("%f",&f);

    c = 5/9 * (f - 32);
    printf("%.2f",c);
    return 0;
}
```

## Code-20

20. Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming.

```
#include <stdio.h>
int main()
{
    float p,rate;
    int time;

    printf("Enter Principle :");
    scanf("%f",&p);

    printf("Enter Rate :");
    scanf("%f",&rate);

    printf("Enter time :");
    scanf("%d",&time);

    float SI = p*rate*time;
    printf("%.2f",SI);
    return 0;
}
```
