#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 10;
    FILE *f;

    f = fopen("newbinar.txt", "w");
        fwrite(&a, 1, sizeof(a), f);

    fclose(f);

    int buf;

    f = fopen("newbinar.txt", "r");
        fread(&buf, 1, sizeof(buf), f);
        printf("%d", buf);

    fclose(f);
    return 0;
}
