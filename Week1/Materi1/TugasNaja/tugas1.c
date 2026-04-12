#include <stdio.h>

int main(){

    char nama[100];
    int nilai;

    printf("Masukan nama mahasiswa : ");
    scanf("%s", &nama);

    printf("Masukan nilai mahasiswa : ");
    scanf("%d", &nilai);

    printf("Nama mahasiswa : %s\n", nama);
    printf("Nilai :%d\n", nilai);

    return 0;
}