#include <stdio.h>
int main()
{
    char c;
    printf("Enter Character :");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        switch (c)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is vowel",c);
        break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is vowel",c);
        break;
        default:
            printf("%c is consonant",c);
        }
    }

    return 0;
}