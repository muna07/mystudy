#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int (*function[2]) (int, int);

    function[0] = max;
    function[1] = min;

    printf("max = %d\nmin = %d", function[0](12, 56), function[1](34, 13));

    return 0;
}
