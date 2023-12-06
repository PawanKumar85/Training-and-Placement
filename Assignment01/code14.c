#include <stdio.h>
int main()
{
    char a[] = {'X','M','L'};
    int n = sizeof(a)/sizeof(char);
    int i;
    for(i = n - 1;i>=0;i--)
        printf("%c ",a[i]);
    return 0;
}