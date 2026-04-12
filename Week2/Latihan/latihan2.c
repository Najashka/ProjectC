#include <stdio.h>

int main(){
    int tahun_lahir, tahun_sekarang, umur;

    printf("Masukan tahun kamu lahir : ");
    scanf("%d", &tahun_lahir);

    printf("Masukan tahun sekarang : ");
    scanf("%d", &tahun_sekarang);

    umur = tahun_sekarang - tahun_lahir;

    printf("Umur kamu sekarang : %d", umur);

    return 0;
}