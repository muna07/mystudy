#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = NULL;
    int num = 10;
    int i;

    array = malloc(sizeof(int) * num);

    i = 0;
    while(i < num)
    {
        array[i] = i * 2;
        printf("%d\n", array[i]);
        i++;
    }
    return 0;
}
