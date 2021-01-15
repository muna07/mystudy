#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num = NULL;

    num = malloc(sizeof(int));
    if (num != NULL)
    {
        *num = 70;
        printf("%d", *num);
    }

    free(num);
    num = NULL;

    return 0;
}
