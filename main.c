void deneme1(float osman){
    float a = 2 * osman;
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


