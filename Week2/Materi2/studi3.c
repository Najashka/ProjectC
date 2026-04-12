#include <stdio.h>

int main (){
    float celcius, fahrenheit;

    printf("Masukan suhu celcius : ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) +32;

    printf("Fahrenheit : %.2f\n", fahrenheit);

    return 0;
}