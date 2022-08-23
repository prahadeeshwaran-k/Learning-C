// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
    int a, b;
    char control;
    printf("Enter the Operation: ");
    scanf("%c", &control);
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    switch (control)
    {
    case '&':
        printf("a = %d, b = %d\n", a, b);
        printf("a&b = %d\n", a & b);
        break;
    case '|':
        printf("a = %d, b = %d\n", a, b);
        printf("a|b = %d\n", a | b);
        break;
    case '^':
        printf("a = %d, b = %d\n", a, b);
        printf("a^b = %d\n", a ^ b);
        break;

    default:
        break;
    }

    return 0;
}