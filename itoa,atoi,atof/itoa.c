#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = rand();
    char str[10];

    itoa(num, str, 10);
    printf("%s", str);

    return 0;
}
