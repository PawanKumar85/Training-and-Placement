# [Assignment_05(Part 02)](https://classroom.google.com/u/1/c/NjIyMTg5NDc5MTk0/a/NjI0Mjk5Nzc5MjY0/details)

## [Code-16](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code16.c)

_16. Write a C program to enter a number and print its reverse._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    while(i!=0)
    {
        int n = i%10;
        i = i/10;
        printf("%d ",n);
    }
    return 0;
}
```

## [Code-17](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code17.c)

_17. Write a C program to check whether a number is palindrome or not._

```
#include <stdio.h>
int main()
{
    int n,res = 0;
    printf("Enter :");
    scanf("%d",&n);

    int original = n;

    while(n!=0)
    {
        int n1 = n%10;
        res = res * 10 + n1;
        n = n/10;
    }

    if(original == res)
        printf("palindrome");
    else
        printf("not a palindrome");
    return 0;
}
```

## [Code-18](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code18.c)

_18. Write a C program to find freuency of each digit in a given integer._

```
#include <stdio.h>
int main()
{
    int n,freuency[10] = {0};
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int n1 = n%10;
        freuency[n1]++;
        n = n/10;
    }

    int i;
    for(i = 0;i < 10;i++)
        if(freuency[i] > 0)
        {
            printf("%d %d",i,freuency[i]);
        }
    return 0;
}
```

## [Code-19](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code19.c)

_19. Write a C program to enter a number and print it in words._

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

## [Code-20](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code20.c)

_20. Write a C program to print all ASCII character with their values._

```
#include <stdio.h>
int main()
{
    char c;
    printf("Enter :");
    scanf("%c",&c);

    printf("%d",c);
    return 0;
}
``

```

## [Code-21](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code21.c)

_21. Write a C program to find power of a number using for loop._

```
#include <stdio.h>
int main()
{
    int n,power,i,res = 1;
    printf("Enter Base :");
    scanf("%d",&n);

    printf("Enter Exponand :");
    scanf("%d",&power);

    for(i = 0;i<power;i++)
        res = res * n;

    printf("%d ^ %d = %d",n,power,res);
    return 0;
}
```

## [Code-22](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code22.c)

_22. Write a C program to find all factors of a number._

```
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter :");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        if(n%i == 0)
            printf("%d ",i);
    }
    return 0;
}
```

## [Code-23](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code23.c)

_23. Write a C program to calculate factorial of a number._

```
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    printf("Factorial of %d : %d", n, factorial(n));
    return 0;
}
```

## [Code-24](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code24.c)

_24. Write a C program to find HCF (GCD) of two numbers._

```
#include <stdio.h>

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
```

## [Code-25](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code25.c)

_25. Write a C program to find LCM of two numbers._

```
#include <stdio.h>

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return ((a * b)/gcd(a,b));
}

int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}
```

## [Code-26](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code26.c)

_26. Write a C program to check whether a number is Prime number or not._

```
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a)
{
    if(a <= 1)
        return false;

    int i = 2;
    while(i * i <= a)
    {
        if(a % i == 0)
            return false;

        i++;
    }

    return true;
}

int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
```

## [Code-27](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code27.c)

_27. Write a C program to print all Prime numbers between 1 to n._

```
#include <stdio.h>
#include <stdbool.h>

int isPrime(int a)
{
    if (a <= 1)
        return false;

    int i = 2;
    while (i * i <= a)
    {
        if (a % i == 0)
            return false;

        i++;
    }

    return true;
}
int main()
{
    int n;
    printf("Enter Upper Limit :");
    scanf("%d", &n);

    int i;
    for(i = 1;i<=n;i++)
    {
        if(isPrime(i))
            printf("%d is Prime number \n",i);
    }


    return 0;
}
```

## [Code-28](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code28.c)

_28. Write a C program to find sum of all prime numbers between 1 to n._

```
#include <stdio.h>
#include <stdbool.h>

int isPrime(int a)
{
    if (a <= 1)
        return false;

    int i = 2;
    while (i * i <= a)
    {
        if (a % i == 0)
            return false;

        i++;
    }

    return true;
}
int main()
{
    int n;
    printf("Enter Upper Limit :");
    scanf("%d", &n);

    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d is Prime number \n", i);
            sum += i;
        }
    }
    printf("Sum = %d",sum);

    return 0;
}
```

## [Code-29](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code29.c)

_29. Write a C program to find all prime factors of a number._

```
#include <stdio.h>
#include <math.h>

void primeFactors(int n)
{
    printf("Prime factors of %d are: ", n);

    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }
    int i;
    for (i = 3; i <= srt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        printf("%d", n);
    }

}

int main()
{
    int n1;
    printf("Enter a n1: ");
    scanf("%d", &n1);
    primeFactors(n1);

    return 0;
}

```

## [Code-30](https://github.com/PawanKumar85/Training-and-Placement/blob/main/Assignment05/Part02/code30.c)

_30. Write a C program to check whether a number is Armstrong number or not._

```
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
```
