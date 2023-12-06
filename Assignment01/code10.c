#include <stdio.h>
int main()
{
    int second;
    printf("Input the second :");
    scanf("%d",&second);

    int hr = second/3600;
    int min = (second%3600)/60;
    int sec = (second%3600) % 60;

    printf("H : M : S\n%d : %d : %d",hr,min,sec);
    return 0;
}