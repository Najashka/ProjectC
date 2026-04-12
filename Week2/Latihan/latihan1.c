#include <stdio.h>

int main(){
    float r, luas;
    float phi = 3.14;

    printf("Masukan jari jari : ");
    scanf("%f", &r);

    luas = phi * r * r;

    printf("Luas Lingkaran : %.2f\n", luas);

    return 0;

}