#include <stdio.h>
int main()
{
    char month[][5] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    int i;
    printf("Enter Month :");
    scanf("%d",&i);

    switch(i)
    {
        case 1: case 3: case 5: case 7 : case 8 : case 10 : case 12:
            printf("%s with 31 days",month[i-1]);
        break;
        case 4:case 6:case 9: case 11:
            printf("%s with 30 days",month[i - 1]); 
        break;
        case 2:
            printf("%s with 28 or 29 days(leap year)",month[i - 1]);
        break;
        default :
            printf("Please enter a valid month");
    }




    return 0;
}