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