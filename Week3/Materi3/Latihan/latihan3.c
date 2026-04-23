#include <stdio.h>

// fungsi untuk menghitung luas lingkaran
float hitungLuas(float r) {
    return 3.14 * r * r;
}

int main() {
    float jari, luas;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jari);

    luas = hitungLuas(jari);

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}