#include "GuzinTraining.h"

struct human human1;

void human_main ()
{
strcpy(human1.name, "Guzin");
human1.age = 29;
strcpy(human1.city,"Bursa");
printf("Name: %s\n", human1.name);
printf("City : %s\n", human1.city);
printf("Age : %d\n", human1.age);
}
