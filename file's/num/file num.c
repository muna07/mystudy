#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int num;
    float Fnum;

    f = fopen("numbers.txt", "w");
        fprintf(f, "%d\n", 56);
        fprintf(f, "%f\n", 36.6);
    fclose(f);

    f = fopen("numbers.txt", "r");

    if (f == NULL)
        printf("fopen Read Error");
    else
    {
        fscanf(f, "%d\n", &num);
        fscanf(f, "%g\n", &Fnum);
        printf("num = %d\nFnum = %g", num, Fnum);
    }
    return 0;
}
