#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i;

    i = 0;
    while(i < 10)
    {
        if (i < 5)
            array[i] = i + 1;
        else
            array[i] = i * i;
        printf("%d. %d\n", i,array[i]);
        i++;
    }

    return 0;
}
