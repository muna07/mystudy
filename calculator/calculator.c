#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, res;

    printf("a is ");
    scanf("%d", &a);

    printf("b is ");
    scanf("%d", &b);

    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n");
    scanf("%d", &res);

    if (res == 1)
        printf("%d + %d = %d", a, b, a + b);
    if (res == 2)
        printf("%d - %d = %d", a, b, a - b);
    if (res == 3)
        printf("%d * %d = %d", a, b, a * b);
    if (res == 4)
        printf("%d / %d = %d", a, b, a / b);

    res = getch();

    return 0;
}
