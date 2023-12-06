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