#include <stdio.h>
int main()
{
    int note;
    printf("Input the Amount :");
    scanf("%d", &note);

    int hundreds = note / 100;
    int fifty = (note % 100) / 50;         // (hundreds%100)/50
    int twenty = ((note % 100) % 50) / 20; // (fifty%50)/20
    int ten = (((note % 100) % 50) % 20) / 10;
    int five = ((((note % 100) % 50) % 20) % 10) / 5;
    int two = (((((note % 100) % 50) % 20) % 10) % 5) / 2;
    int one = ((((((note % 100) % 50) % 20) % 10) % 5) % 2);

    printf("%d Notes of 100.00", hundreds);
    printf("\n%d Notes of 50.00", fifty);
    printf("\n%d Notes of 20.00", twenty);
    printf("\n%d Notes of 10.00", ten);
    printf("\n%d Notes of 5.00", five);
    printf("\n%d Notes of 2.00", two);
    printf("\n%d Notes of 1.00", one);
    return 0;
}