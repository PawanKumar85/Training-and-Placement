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