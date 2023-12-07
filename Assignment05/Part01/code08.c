#include <stdio.h>
int main()
{
    int i;
    printf("Enter :");
    scanf("%d",&i);

    int sum = 0;
    int n = 1;
    while(n <= i)
    {
        if(n%2 != 0)
            sum += n;
        n++;
    }
    printf("%d",sum);
    return 0;
}