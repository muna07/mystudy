#include <stdio.h>
#include <stdlib.h>

struct sPoint {

    int a;
    float b;
    char c;

};

typedef struct sPoint Tpoint;

int main()
{
   FILE *f;
   Tpoint ptr = {15, 6.6, 'A'};

    f = fopen("study.txt", "w");
        fwrite(&ptr, 1, sizeof(ptr), f);
    fclose(f);

    Tpoint buf;

    f = fopen("study.txt", "r");
        fread(&buf, 1, sizeof(buf), f);
        printf("%d\n%f\n%c", buf.a, buf.b, buf.c);
    fclose(f);

    return 0;
}
