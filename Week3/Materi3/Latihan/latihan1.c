#include <stdio.h>

int main() {
    int angka;

    while (1) {
        printf("Masukkan angka (0 untuk keluar): ");
        scanf("%d", &angka);

        if (angka == 0) {
            break;
        }

        if (angka % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}