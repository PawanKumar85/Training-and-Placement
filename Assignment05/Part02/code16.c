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