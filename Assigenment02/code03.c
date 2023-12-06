#include <stdio.h>

int isEven(int i)
{
    if(i%2 == 0)
        return 1;
    return 0;
}

int main()
{
    int i;
    printf("Enter Number :");
    scanf("%d",&i);

    if(isEven(i) == 1)    
        printf("Even");
    else
        printf("Odd");
    return 0;
}