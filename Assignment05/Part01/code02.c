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