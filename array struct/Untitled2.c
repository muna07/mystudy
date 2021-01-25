#include <stdio.h>
#include <stdlib.h>

struct str {

    int a;
    float b;
    char c;

};

typedef struct str Tstr, *Tpoint;

int main()
{
    Tstr t = {10, 6.66, 'A'};
    Tpoint ptr = NULL;

    ptr = &t;

    if (ptr != NULL)
        (*ptr).a = 10;
        (*ptr).b = 6.666;
        (*ptr).c = 'S';

    printf("int = %d\nfloat = %g\nchar = %c", t.a, t.b, t.c);

    return 0;
}
