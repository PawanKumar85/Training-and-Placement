#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i < 0)
        printf("Negative Number");
    else if(i == 0)
        printf("Zero");
    else if( i > 0)
        printf("Positive Number");
    return 0;
}