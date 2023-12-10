#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
            printf("%d ",a[i]);
    }
    return 0;
}
