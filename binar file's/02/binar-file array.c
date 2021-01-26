#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[5];
    FILE *f;
    srand(time(NULL));

    f = fopen("002.txt", "w");
        fwrite(num, 1, sizeof(num), f);
    fclose(f);

    int buf[5];
    f = fopen("002.txt", "r");
        fread(buf, 1, sizeof(buf), f);

    for (int i = 0; i < 5; i++)
    {
        buf[i] = rand() % 20;
        printf("%d\n", buf[i]);
    }

    fclose(f);
    return 0;
}
