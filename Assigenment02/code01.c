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