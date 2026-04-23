#include <stdio.h>
#include <string.h>

#define MAX 100

// fungsi untuk menentukan grade
char tentukanGrade(int nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

int main() {
    int n, i, j;
    char nama[MAX][50];
    int nilai[MAX];
    char grade[MAX];
    float total = 0, rata;

    printf("=========================================\n");
    printf("     PROGRAM DATA NILAI MAHASISWA\n");
    printf("=========================================\n");

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);
    getchar(); // buang newline

    // input data
    for (i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama  : ");
        fgets(nama[i], sizeof(nama[i]), stdin);
        nama[i][strcspn(nama[i], "\n")] = 0; // hapus newline

        printf("Nilai : ");
        scanf("%d", &nilai[i]);
        getchar();

        grade[i] = tentukanGrade(nilai[i]);
        total += nilai[i];
    }

    // sorting (descending - ranking)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nilai[i] < nilai[j]) {
                int tempNilai = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = tempNilai;

                char tempGrade = grade[i];
                grade[i] = grade[j];
                grade[j] = tempGrade;

                char tempNama[50];
                strcpy(tempNama, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], tempNama);
            }
        }
    }

    rata = total / n;

    // output
    printf("\n============================================================\n");
    printf("| No | Nama                | Nilai | Grade | Ranking |\n");
    printf("============================================================\n");

    for (i = 0; i < n; i++) {
        printf("| %2d | %-20s | %5d |   %c   |   %2d    |\n",
               i + 1, nama[i], nilai[i], grade[i], i + 1);
    }

    printf("============================================================\n");
    printf("Rata-rata nilai: %.2f\n", rata);
    printf("============================================================\n");

    return 0;
}