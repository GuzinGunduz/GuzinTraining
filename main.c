#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct human
{
    char name [25];
    char city[25] ;
    float  age ;
} human1, human2, h[20];



int main ()
{
    strcpy(human1.name, "Guzin");
    human1.age = 29;
    strcpy(human1.city,"Bursa");

    printf("Name: %s\n", human1.name);
    printf("City : %s\n", human1.city);
    printf("Age : %.1f\n", human1.age);





    return 0;
}
