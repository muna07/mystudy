 #include <stdio.h>
 #include <stdlib.h>

 struct sPoint {

    int age;
    char name[10];

 };

 typedef struct sPoint t;
 int main()
 {
     //t ptr = {20, "Mukhammad"};
     t a[2];

     a[0].age = 21;
     a[0].name = "Amin";
     printf("age = %d\nname = %s\n", a[0].age, a[0].name);

     return 0;
 }
