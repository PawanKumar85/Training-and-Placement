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