#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int *cnt = NULL;
    int **ptr = NULL;

    cnt = &num;
    if (cnt != NULL)
        *cnt = 15;

    ptr = &cnt;
    if (ptr != NULL)
        **ptr = 20;

    printf("%d", num);

    free(cnt);
    cnt = NULL;

    return 0;
}
