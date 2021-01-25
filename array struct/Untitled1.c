#include <stdlib.h>
#include <stdio.h>

int main()
{
    float array[] = {5.6, 7.88, 4.53};
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len; i++)
        printf("%d.\t%g\n", i, array[i]);

    return 0;
}
