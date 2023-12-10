#include<stdio.h>
int main()
{
    int a[]={2,2,3,6,7,4,33,3};
    int b[]= {12,23,54,32,11,9};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    int n3 = n1+n2;
    int c[n3];
    for(int i=0;i<n1;i++)
    {
        c[i] = a[i];
    }
    for(int i=0;i<n2;i++)
    {
        c[n1+i] = b[i];
    }
    for(int i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }
}