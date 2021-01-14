#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "36.666";
    float num;

    num = atof(str);
    printf("%.3f", num);

    return 0;
}
