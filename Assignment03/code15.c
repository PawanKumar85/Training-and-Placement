#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i & 1)
        printf("%d is Odd number",i);
    else
        printf("%d is Even Number",i);
    return 0;
}