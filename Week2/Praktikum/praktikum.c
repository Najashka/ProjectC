#include <stdio.h>

int main(){

    char nama[100];
    float nilai_tugas, nilai_uts, total_nilai;

    printf("Masukan nama mahasiswa : ");
    scanf("%s", &nama);

    printf("Masukan nilai tugas : ");
    scanf("%f", &nilai_tugas);

    printf("Masukan nilai UTS : ");
    scanf("%f", &nilai_uts);

    total_nilai = (nilai_tugas + nilai_uts) / 2;

    printf("Nama mahasiswa : %s\n", nama);
    printf("Nilai Rata Rata : %.2f\n", total_nilai);

    return 0;


}