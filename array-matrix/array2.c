#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[10];

    i = 0;
    while(i < 10)
    {
        array[i] = 7;
        i++;
    }

    i = 0;
    while(i < 10)
    {
        printf("%d. %d\n", i, array[i]);
        i++;
    }

    return 0;
}
