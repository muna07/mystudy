#include <stdio.h>
#include <stdlib.h>

void proc(int **p2)
{
    free(p2);
    p2 = NULL;
}

int main()
{
    int *p = NULL;

    p = malloc(sizeof(int));
    if (p != NULL)
        *p = 3;
    printf("%d", *p);

    proc(&p);

    return 0;
}
