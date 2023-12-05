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