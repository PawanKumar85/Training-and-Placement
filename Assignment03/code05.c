#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c",&c);

    if(c >= 65 && c <= 90)
        printf("Upper Case");
    else if(c >= 97 && c <= 122)
        printf("Lower Case");
    
    return 0;
}