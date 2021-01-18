#include <stdio.h>
#include <stdlib.h>

int Get5()
{
    return 5;
}

int main()
{
    int (*cnt)();

    cnt = Get5;
    printf("%d", cnt());

    return 0;
}
