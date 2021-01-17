#include <stdio.h>
#include <stdlib.h>

void proc1(int *cnt, int *ptr)
{
    if (cnt != NULL)
        *cnt = *cnt + 1;
    if (ptr != NULL)
        *ptr = *ptr * 2;

    int n = *cnt;
    *cnt = *ptr;
    *ptr = n;

}

int main()
{
    int num1 = 10;
    int num2 = 10;

    proc1(&num1, &num2);

    printf("num1 = %d\nnum2 = %d", num1, num2);

    return 0;

}
