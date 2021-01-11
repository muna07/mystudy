#include <stdio.h>

void proc(int *pointer)
{
    if (pointer != NULL)
    *pointer = *pointer + 1;
}

void proc_2(int *pointer_2)
{
    if (pointer_2 != NULL)
    *pointer_2 = *pointer_2 * 2;
}

int main()
{
    int a = 35;
    int b = 36;

    proc(&a);
    proc_2(&b);

    printf("%d\n%d", a,b);

    return 0;
}
