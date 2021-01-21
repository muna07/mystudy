#include <stdio.h>
#include <stdlib.h>

struct str {

    int x;
    char y

};

typedef struct str Tstr;

int main()
{
    Tstr a ={15, 'S'};

    Tstr *ptr = NULL;
    ptr = &a;

    ptr -> x = 20;
    ptr -> y = 'G';
    printf("%d\n%c", a.x, a.y);

    return 0;
}
