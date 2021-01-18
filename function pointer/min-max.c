#include <stdio.h>
#include <stdlib.h>

typedef (*Tpoint) (int, int);

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int GetOne(Tpoint one)
{
    return one(124, 17);
}

int main()
{
    printf("%d", GetOne(max));

    return 0;
}
