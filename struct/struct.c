#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct first_str {

    int height, width, length;
    char name[50];
    char color[30];

};

int main()
{
    struct first_str a;

    a.height = 20;
    a.width = 15;
    a.length = 40;
    sprintf(a.name, "table");
    sprintf(a.color, "black-white");

    printf("width = %d\nheight = %d\nlength = %d\nname = %s\ncolor = %s\n", a.height, a.width, a.length, a.name, a.color);

    return 0;
}
