#include <stdio.h>

int main()
{
    float num_1 = 36.6;
    float num_2 = 25.5;
    float *first_p;

    first_p = &num_1;
    *first_p = 6.6;

    first_p = &num_2;
    *first_p = 5.5;
    printf("%.1f\n%.1f", num_1, num_2);

    return 0;
}
