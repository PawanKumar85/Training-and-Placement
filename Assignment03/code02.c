#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i%5 == 0 && i%11 == 0)
        printf("%d is divisible by both 5 and 11",i);
    else if(i%5 == 0)
        printf("%d is only divisible by 5",i);
    else
        printf("%d is only divisible by 11",i);
    return 0;
}