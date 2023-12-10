#include<stdio.h>
int main()
{
    int a[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i] == a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}