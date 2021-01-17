#include <stdio.h>
#include <stdlib.h>

void proc(int **p2)
{
    *p2 = malloc(sizeof(int));
}

int main()
{
    int *p = NULL;

    proc(&p);

    if (p != NULL)
        *p = 10;
    printf("%d", *p);

    free(p);
    p = NULL;

    return 0;
}
