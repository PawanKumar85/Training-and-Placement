#include <stdio.h>

int main() {
    int a;

    printf("Enter A :");
    scanf("%d",&a);

    if(a >= 0 && a <= 10)
        printf("A is greater than 0 and smaller than 10");
    else if(a>= 0 || a <= 10)
        printf("A is greater than 0 or smaller than 10");
    else if(!(a >= 0))
        printf("A is not greater than 0");
    return 0;
}
