#include<stdio.h>
int main()
{
    int a[5],max,min;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("MAX - %d\n",max);
    printf("MIN - %d\n",min);
    return 0;
}
