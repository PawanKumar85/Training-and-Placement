#include <stdio.h>
int main()
{
    char c;
    printf("Enter :");
    scanf("%c",&c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("%c is Character",c);
    else if(c>=48 && c <= 57)
        printf("%c is Number",c);
    else if((c >= 32 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <=125))
        printf("%c is special Character",c);
    else
        printf("No Define");

    return 0;
}