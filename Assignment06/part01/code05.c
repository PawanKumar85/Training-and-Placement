#include<stdio.h>
int main()
{
    int n=5;
    int a[5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d",a[n-2]);
    return 0;
}
