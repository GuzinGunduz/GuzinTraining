#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deneme1(float r){
    float a = 2 * r;
    printf("\nSayi = %.2f\n", a);
}

void deneme2(float r){
    float a = 3 * r;
    printf("\nSayi = %.2f\n", a);
}

float deneme3(float r){
    float a = 4 * r;
    printf("\nSayi = %.2f\n", 2*a);
    return a;
}
