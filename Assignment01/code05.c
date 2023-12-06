#include <stdio.h>
int main()
{
    float kmph,mph;
    printf("Input kilometer per hour :");
    scanf("%f",&kmph);

    mph = kmph * .621371;
    printf("%f miles per hours",mph);
    return 0;
}