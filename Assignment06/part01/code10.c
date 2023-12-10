#include<stdio.h>
int main()
{
    int a[5]={2,5,1,4,3},i,n=5;
    for(int  j=0 ; j<n;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\nSpecified index to delete : ");
    scanf("%d",&i);
    
    for(int j=i;j<n-1;j++)
    {
        a[j] = a[j+1];
    }
    n--;
    for(i =0 ; i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
