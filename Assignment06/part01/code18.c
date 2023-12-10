#include<stdio.h>
int main()
{
    int a[]={2,4,54,22,3,7,9,5};
    int n=sizeof(a)/sizeof(int);
    int num;
    printf("Enter a number to search: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("number is at index %d",i);
            break;
        }
    }
}