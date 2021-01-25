#include <stdlib.h>
#include <stdio.h>

struct str {

    int height;
    char name[10];
};

typedef struct str cnt, *Tpoint;

int main()
{
    cnt t = {183, "Mukhammad"};

    Tpoint ptr = NULL;
    ptr = &t;
    ptr->height = 185;

    printf("%d\n%s", t.height, t.name);

    return 0;
}
