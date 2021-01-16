#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *array = NULL;
    int num = 14;
    int i;

    srand(time(NULL));
    array = malloc(sizeof(int) * num);

    i = 0;
    while(i < num)
    {
        if (i < 10)
            array[i] = i * 2;
        else
            array[i] = rand();
        printf("%d. %d\n", i, array[i]);
        i++;
    }

    free(array);
    array = NULL;

    return 0;
}
