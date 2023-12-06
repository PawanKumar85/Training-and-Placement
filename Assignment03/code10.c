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