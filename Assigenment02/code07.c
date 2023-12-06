#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);

    printf("\nA + B = %d",a + b);
    printf("\nA - B = %d",a - b);
    printf("\nA * B = %d",a * b);
    printf("\nA / B = %d",a / b);
    printf("\nA %% B = %d",a % b);
    return 0;
}