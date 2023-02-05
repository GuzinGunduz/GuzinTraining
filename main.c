#include "GuzinTraining.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    float a = 90;
    printf("a in main is %.2f\n", a);

    deneme1(a);

    printf("a in main is %.2f\n", a);

    deneme2(a);

    printf("a in main is %.2f\n", a);

    a = deneme3(a);

    printf("a in main is %.2f\n", a);

    return 0;
}


