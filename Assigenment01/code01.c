#include <stdio.h>
int main()
{
    char name[100];
    char dob[20];
    char mobile[11];

    printf("Enter Name :");
    scanf("%s",name);

    printf("Enter DOB :");
    scanf("%s",dob);

    printf("Enter Mobile :");
    scanf("%s",mobile);

    printf("%s\n",name);
    printf("%s\n",dob);
    printf("%s",mobile);
    return 0;
}