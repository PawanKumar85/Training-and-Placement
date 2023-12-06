#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c",&c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("Alphabat");
    else   
        printf("Not a Alphabat");
    return 0;
}