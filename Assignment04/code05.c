#include <stdio.h>

int isEven(int i)
{
    if(i%2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int res = isEven(i);

    switch(res)
    {
        case 0 : printf("%d is Odd",i); break;
        case 1 : printf("%d is Even",i); break;
        default :printf("Nothing");
    }
    return 0;
}