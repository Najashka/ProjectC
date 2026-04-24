#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n;
    float total = 0, rata;

    printf("Jumlah mahasiswa: ");
    scanf("%d", &n);

    // alokasi memori dinamis
    struct Mahasiswa *mhs;
    mhs = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    if (mhs == NULL) {
        printf("Gagal alokasi memori!\n");
        return 1;
    }

    // input data
    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama  : ");
        scanf(" %[^\n]", mhs[i].nama);

        printf("Nilai : ");
        scanf("%f", &mhs[i].nilai);

        total += mhs[i].nilai;
    }

    // hitung rata-rata
    rata = total / n;

    // tampilkan data
    printf("\n=== Data Mahasiswa ===\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %.2f\n", i + 1, mhs[i].nama, mhs[i].nilai);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

    // free memory
    free(mhs);

    return 0;
}