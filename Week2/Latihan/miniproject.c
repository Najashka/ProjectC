#include <stdio.h>

int main(){

    char nama[100];
    int umur;

    printf("Masukan nama kamu : ");
    scanf("%s", &nama);

    printf("Masukan umur kamu : ");
    scanf("%d", &umur);

    printf("Nama kamu : %s\n", nama);
    printf("Umur kamu : %d\n", umur);

    return 0;
}