#include <stdio.h>

int main(){
    char nama[100];
    int umur;

    printf("Nama panggilan kamu siapa : ");
    scanf("%s", nama);

    printf("Umur kamu berapa tahun : ");
    scanf("%d", &umur);

    printf("Nama panggilan kamu : %s\n", nama);
    printf("Umur kamu : %d tahun\n", umur);

    return 0;

}