#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
        printf("%d", i++);
    return 0;
}