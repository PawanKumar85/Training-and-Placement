#include <stdio.h>
#include <math.h>

char des(int a, int b, int c)
{
    int d = pow(b, 2) - (4 * a * c);
    if (d > 0)
        return 'p';
    else if (d == 0)
        return 'z';
}

int main()
{
    int a, b, c, d;
    float root1, root2;
    printf("Enter coefficients of the quadratic equation : ");
    scanf("%d %d %d", &a, &b, &c);

    char res = des(a, b, c);
    

    switch (res)
    {
    case 'p':
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f\nRoot2 = %.2f", root1, root2);
        break;

    case 'z':
        root1 = -b / (2 * a);
        printf("Root1 = %.2f", root1);
        break;

    default:
        printf("Nothing");
    }
    return 0;
}
