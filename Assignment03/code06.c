#include <stdio.h>
int main()
{
    char character[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int i;
    printf("Enter Number :");
    scanf("%d", &i);
    if (i >= 0 && i <= 9)
        printf("%s", character[i]);
    else
        printf("Please enter the number between between the range of 0 to 9");
    return 0;
}