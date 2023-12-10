#include<stdio.h>
int main()
{
    int a[5],neg=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            neg++;
        }
    }
    printf("Total negative - %d\n",neg);
    return 0;
}
