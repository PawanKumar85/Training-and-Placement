#include <stdio.h>
int main()
{
    int min;
    printf("Input minutes :");
    scanf("%d",&min);

    int hours = min/60;
    int mins = (min - hours * 60);
    printf("%d hrs: ",hours);
    printf("%d mins",mins);
    return 0;
}