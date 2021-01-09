#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char equal[10][21];
    int i;
    int a = 5, b = 1;
    char step;
    int coord_a, coord_b;
    int star_a = 7, star_b = 4;
    int point = 0;

    srand(time(NULL));

   do
   {
            sprintf(equal[0], "####################");
        for (i = 1; i < 9; i++)
            sprintf(equal[i], "#                  #");
            sprintf(equal[9], "####################");

        equal[b][a] = '@';
        equal[star_b][star_a] = '*';
        system("cls");

        for (i = 0; i < 10; i++)
            printf("%s\n", equal[i]);
            printf("\n Point: %d", point);

            step = getch();
            coord_a = a;
            coord_b = b;

        if (step == 'w') b--;
        if (step == 's') b++;
        if (step == 'd') a++;
        if (step == 'a') a--;

        if (equal[b][a] == '#')
        {
            a = coord_a;
            b = coord_b;
        }

        if ((a == star_a) && (b == star_b))
        {
            star_a = rand() * 1.0 / RAND_MAX * 18 + 1;
            star_b = rand() * 1.0 / RAND_MAX * 8 + 1;
            point++;
        }
   }
   while (step != 'e');

    return 0;
}
