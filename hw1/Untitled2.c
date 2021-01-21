#include <stdio.h>
#include <stdlib.h>

struct str {

    int x;
    char y;

};

typedef struct str Tpoint;

int main()
{
    Tpoint array[] = {{12, 'q'}, {13, 'd'}, {34, 'f'}};
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len; i++)
        printf("%d %c\n", array[i].x, array[i].y);

    return 0;
}
