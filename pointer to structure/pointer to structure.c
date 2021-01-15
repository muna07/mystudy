#include <stdio.h>
#include <stdlib.h>

struct sPoint {

    int x,y;

};

typedef struct sPoint tPoint;

void proc1(tPoint point)
{
    printf("x = %d\ny = %d", point.x, point.y);
}

void showpoint(tPoint *ptr, int xPoint, int yPoint)
{
    if (ptr != NULL)
    {
        (*ptr).x = xPoint;
        (*ptr).y = yPoint;
    }
}

int main()
{
    tPoint p;

    showpoint(&p, 11, 22);
    proc1(p);

    return 0;
}
