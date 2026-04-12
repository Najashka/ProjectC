#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    double tugas, uts, uas, akhir;

    printf("Nama mahasiswa : ");
    if (!fgets(name, sizeof(name), stdin)) return 1;
    name[strcspn(name, "\n")] = '\0'; // remove new line

    printf("Nilai tugas : "); if (scanf("%lf", &tugas) !=1 ) return 1;
    printf("Nilai Uts : "); if (scanf("%lf", &uts) !=1 ) return 1;
    printf("Nilai Uas : "); if (scanf("%lf", &uas) !=1 ) return 1;

    akhir = 0.30 * tugas + 0.30 * uts + 0.40 * uas;

    char grade;
    if (akhir >= 85) grade = 'A';
    else if (akhir >= 70) grade = 'B';
    else if (akhir >= 55) grade = 'C';
    else if (akhir >= 40) grade = 'D';
    else grade = 'E';

    printf("\n%s => Nilai Akhir : %.2f, Grade : %c\n", name, akhir, grade);
    return 0;
}