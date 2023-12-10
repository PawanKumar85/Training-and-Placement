#include<stdio.h>
int main()
{
    int a[5],even=0,odd=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even - %d\n",even);
    printf("Odd - %d\n",odd);
    return 0;
}
