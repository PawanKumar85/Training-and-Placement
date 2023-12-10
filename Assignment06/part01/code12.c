#include<stdio.h>
int main()
{
    int a[10],freq[10];
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        freq[i] = -1;
    }
    for(i=0;i<10;i++)
    {
        count =1;
        for(j=i+1;j<10;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i]=count;
        }
    }
    for(i=0;i<10;i++)
    {
        if(freq[i] ==1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}