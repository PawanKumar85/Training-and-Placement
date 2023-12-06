#include <stdio.h>
char check(int i)
{
    if(i > 0)
        return 'p';
    else if(i == 0)
        return 'z';
    else  
        return 'n';
}
int main()
{
    char c;
    int i;
    printf("Enter :");
    scanf("%d",&i);

    char res = check(i);
    
    switch(res)
    {
        case 'p' : printf("Positive Number"); break;
        case 'z' : printf("Zero"); break;
        case 'n' : printf("Negative number"); break;
        default : printf("Norhing");
    }
    return 0;
}