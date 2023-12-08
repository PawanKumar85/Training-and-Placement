#include <stdio.h>
int main()
{
    int n,frequency[10] = {0};
    printf("Enter :");
    scanf("%d",&n);

    while(n != 0)
    {
        int n1 = n%10;
        frequency[n1]++;
        n = n/10;
    }

    int i;
    for(i = 0;i < 10;i++)
        if(frequency[i] > 0)
        {
            printf("%d %d",i,frequency[i]);
        }
    return 0;
}