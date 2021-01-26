#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char str[1000];

    f = fopen("file.txt", "w");
        fprintf(f, "%s", "Hello, How are you?\n");
        fprintf(f, "%s", "Hi, all right!");
    fclose(f);

    f = fopen("file.txt", "r");

    while (!feof(f))
    {
        if(fgets(str, 1000, f) != NULL)
        printf("%s", str);
    }

    fclose(f);

    return 0;
}
