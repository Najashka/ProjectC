#include <stdio.h>

int main(){

    float meter, centimeter;

    printf("Masukan berapa Meter : ");
    scanf("%f", &meter);

    centimeter = meter * 100;

    printf("Hasil : %.2f\n", centimeter);

    return 0;
}