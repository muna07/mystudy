 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main()
 {
     int i;

     srand(time(NULL));
     i = (rand() % 5);

     switch(i)
     {
     case 0:
        printf("Naruto");
        break;
     case 1:
        printf("Which");
        break;
     case 2:
        printf("Why he?");
        break;
     case 3:
        printf("Spiderman");
        break;
     case 4:
        printf("Superman");
        break;
        default:
        printf("Error");
     }

     return 0;
 }
