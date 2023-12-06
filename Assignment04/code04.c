#include <stdio.h>

int max(int a,int b)
{
    if(a > b)
        return 1;
    return 0;
}
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    int maxi = max(a,b);

    switch(maxi)
    {
        case 0 : 
            printf("B is greater than A");
            break;
        case 1 :
            printf("A is greater than B");
            break;
        default:
            printf("Nothing");
    }
    return 0;
}