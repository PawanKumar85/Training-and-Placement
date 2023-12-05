#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a string: ");
    scanf("%s", str);

    printf("%d\n", i);
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%c\n", c);
    printf("%s\n", str);
    return 0;
}
