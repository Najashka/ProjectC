#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int umur;
    float ipk;
};

int main() {
    struct Mahasiswa mhs[3]; // array untuk 3 mahasiswa

    // Input data
    for (int i = 0; i < 3; i++) {
        printf("Data Mahasiswa ke-%d\n", i + 1);

        printf("Nama: ");
        scanf(" %[^\n]", mhs[i].nama); // bisa baca spasi

        printf("Umur: ");
        scanf("%d", &mhs[i].umur);

        printf("IPK: ");
        scanf("%f", &mhs[i].ipk);

        printf("\n");
    }

    // Output data
    printf("=== Data Mahasiswa ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Mahasiswa ke-%d\n", i + 1);
        printf("Nama : %s\n", mhs[i].nama);
        printf("Umur : %d\n", mhs[i].umur);
        printf("IPK  : %.2f\n", mhs[i].ipk);
        printf("\n");
    }

    return 0;
}