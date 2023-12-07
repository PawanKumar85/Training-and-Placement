# [Assignment_05(Part 01)](https://classroom.google.com/u/1/c/NjIyMTg5NDc5MTk0/a/NjI0MzAwNzc5ODEz/details)

## [Code-01](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code01.c)

_1 Write a C program to print all natural numbers from 1 to n. - using while loop._

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
        printf("%d", i++);
    return 0;
}
```

## [Code-02](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code02.c)

_2. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop_

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int i = n;
    while(i != 0)
        printf("%d",i--);

    return 0;
}
```

## [Code-03](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code03.c)

_3. Write a C program to print all alphabets from a to z - using while loop_

```
#include <stdio.h>
int main()
{
    int i = 97;
    while(i <= 122)
        printf("%c\t",i++);
    return 0;
}
```

## [Code-04](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code04.c)

_4. Write a C program to print all even numbers between 1 to 100. - using while loop_

```
#include <stdio.h>
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i%2 == 0)
            printf("%d ",i);
        i++;
    }
    return 0;
}
```

## [Code-05](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code05.c)

_5. Write a C program to print all odd number between 1 to 100._

```
#include <stdio.h>
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i%2 != 0)
            printf("%d ",i);
        i++;
    }
    return 0;
}
```

## [Code-06](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code06.c)

_6. Write a C program to find sum of all natural numbers between 1 to n._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int sum = 0;
    int n = 1;
    while(n <= i)
    {
        sum += n++;
    }
    printf("%d",sum);
    return 0;
}
```

## [Code-07](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code07.c)

_7. Write a C program to find sum of all even numbers between 1 to n._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int sum = 0;
    int n = 1;
    while(n <= i)
    {
        if(n%2 == 0)
            sum += n;
        n++;
    }
    printf("%d",sum);
    return 0;
}
```

## [Code-08](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code08.c)

_8. Write a C program to find sum of all odd numbers between 1 to n._

```
#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int sum = 0;
    int n = 1;
    while(n <= i)
    {
        if(n%2 != 0)
            sum += n;
        n++;
    }
    printf("%d",sum);
    return 0;
}
```

## [Code-09](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/code09.c)

_9. Write a C program to print multiplication table of any number._

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int i;
    for(i = 1;i <= 10 ;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
```

## [Code-10](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code10.c)

_10. Write a C program to count number of digits in a number._

```
#include <stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int i = n%10;
        n = n/10;
        count++;
    }
    printf("Count = %d",count);
    return 0;
}
```

## [Code-11](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code11.c)

_11. Write a C program to find first and last digit of a number._

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
    }
    printf("First = %d",n);
    printf("Last = %d",last);
    return 0;
}
```

## [Code-12](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code12.c)

_12. Write a C program to find sum of first and last digit of a number._

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
    }

    printf("Sum of first and last digit = %d",n + last);
    return 0;
}
```

## [Code-13](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/code13.c)

_13. Write a C program to swap first and last digits of a number._

```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
    }

    int temp = last;
    last = n;
    n = temp;

    printf("First = %d\nLast = %d",n,last);
    return 0;
}
```

## [Code-14](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code14.c)

_14. Write a C program to calculate sum of digits of a number._

```
#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int i = n%10;
        n = n/10;
        sum += i;
    }
    printf("Sum = %d",sum);
    return 0;
}
```

## [Code-15](https://github.com/PawanKumar85/Training-and-Placement/tree/main/Assignment05/Part01/code15.c)

_15. Write a C program to calculate product of digits of a number._

```
#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int i = n%10;
        n = n/10;
        sum *= i;
    }
    printf("Sum = %d",sum);
    return 0;
}
```
