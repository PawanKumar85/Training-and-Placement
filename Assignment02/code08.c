#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first operand: ");
    scanf("%d", &a);
    printf("Enter the second operand: ");
    scanf("%d", &b);

    printf("\nRelational Operator Results:\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n", a, b, a <= b);

    return 0;
}
