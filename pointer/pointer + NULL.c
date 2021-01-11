#include <stdio.h>

int main()
{
    int num = 5;
    int *pointer = NULL;

    pointer = &num;
    *pointer = 6;

    if (pointer != NULL)
        *pointer = 7;
    printf("%d", num);

    return 0;
}
