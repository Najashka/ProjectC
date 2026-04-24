#include <stdio.h>

int main() {
    int angka[10];
    int max;

    // Input data
    for (int i = 0; i < 10; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // Asumsikan nilai pertama sebagai terbesar
    max = angka[0];

    // Mencari nilai terbesar
    for (int i = 1; i < 10; i++) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }

    // Output
    printf("Nilai terbesar adalah: %d\n", max);

    return 0;
}