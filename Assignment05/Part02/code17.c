#include <stdio.h>
int main()
{
    int n,res = 0;
    printf("Enter :");
    scanf("%d",&n);

    int original = n;

    while(n!=0)       
    {
        int n1 = n%10;
        res = res * 10 + n1;
        n = n/10;
    }

    if(original == res)
        printf("palindrome");
    else
        printf("not a palindrome");
    return 0;
}