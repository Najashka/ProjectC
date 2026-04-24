#include <stdio.h>
#include <stdlib.h>

struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n;

    printf("Jumlah karyawan: ");
    scanf("%d", &n);

    // alokasi memori
    struct Karyawan *kar;
    kar = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    if (kar == NULL) {
        printf("Gagal alokasi memori!\n");
        return 1;
    }

    // input data
    for (int i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i + 1);

        printf("Nama : ");
        scanf(" %[^\n]", kar[i].nama);

        printf("Umur : ");
        scanf("%d", &kar[i].umur);

        printf("Gaji : ");
        scanf("%f", &kar[i].gaji);
    }

    // tampilkan data
    printf("\n=== Data Karyawan ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i + 1);
        printf("Nama : %s\n", kar[i].nama);
        printf("Umur : %d\n", kar[i].umur);
        printf("Gaji : %.2f\n", kar[i].gaji);
    }

    // free memory
    free(kar);

    return 0;
}