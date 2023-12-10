#include<stdio.h>
int main()
{
    int a[] = {3,1,5,7,8,4,2,9};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n/2;i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}