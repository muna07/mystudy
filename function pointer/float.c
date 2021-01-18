#include <stdio.h>
#include <stdlib.h>

int funct1(float a, float b)
{
    return a + b;
}

int funct2(float a, float b)
{
    return a * b;
}

int main()
{
    float (*Fpoint) (float, float);
    float num1, num2;

    Fpoint = funct1;
    Fpoint = funct2;

    num1 = funct1(5, 5);
    num2 = funct2(10, 5);

    printf("funct1 = %g\nfunct2 = %g", num1, num2);

    return 0;
}
