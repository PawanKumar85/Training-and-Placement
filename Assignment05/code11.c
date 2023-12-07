#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
    }
    printf("First = %d",n);
    printf("Last = %d",last);
    return 0;
}