#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("i =  ");
    scanf("%d", &i);
    i = 1000 + (i < 10 ? 10 : 100);
    printf("%d", i);

    return 0;
}
