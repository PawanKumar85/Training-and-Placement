#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    if(i%2 == 0)
        printf("%d is Even",i);
    else 
        printf("%d is Odd",i);
    
    return 0;
}