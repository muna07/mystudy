#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *num = NULL;
   char *str = NULL;
   float *fnum = NULL;

   num = malloc(sizeof(int));
   str = malloc(sizeof(char));
   fnum = malloc(sizeof(float));

    if (num != NULL)
        *num = 5;

    if (str != NULL)
        *str = 'w';

    if (fnum != NULL)
        *fnum = 5.5;

   printf("int = %d\nchar = %c\nfloat = %.1f", *num, *str, *fnum);

   free(num);
   num = NULL;

   free(str);
   str = NULL;

   free(fnum);
   fnum = NULL;

   return 0;
}
