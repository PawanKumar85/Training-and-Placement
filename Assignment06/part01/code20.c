#include<stdio.h>
void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {2,4,3,4,6,4,6,7,17,65,4,41,9,7,42};
    int n=sizeof(a)/sizeof(int);
    int even=0, odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    int e[even],i=0;
    int o[odd],j=0;
    for(int k=0;k<n;k++)
    {
        if(a[k]%2==0)
        {
            e[i]=a[k];
            i++;
        }
        else{
            o[j]=a[k];
            j++;
        }
    }
    sort(e,even);
    sort(o,odd);
    for(i=0;i<even;i++)
    {
        printf("%d ",e[i]);
    }
    printf("\n");
    for(j=0;j<odd;j++)
    {
        printf("%d ",o[j]);
    }
}