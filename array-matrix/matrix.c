#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[9][9];
    int x,y;

    for (x = 0; x < 9; x++)
    {
        for (y = 0; y < 9; y++)
        {
            array[x][y] = (x + 1) * (y + 1);
            printf("%d\t", array[x][y]);
        }
        printf("\n");
    }
    return 0;
}
