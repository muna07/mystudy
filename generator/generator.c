#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define num 50

int main()
{
    int equal[num];
    int i;

    srand(time(NULL));

    i = 0;
    while (i < 10)
    {
        equal[i] = rand();
        printf("%d. %d\n", i, equal[i] % 30 + 10);
        i++;
    }

    return 0;
}
