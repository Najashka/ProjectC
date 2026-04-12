#include <stdio.h>

int main(){
    
    int panjang, lebar, luas;

    printf("Masukan Panjang :");
    scanf("%d", &panjang);

    printf("Masukan Lebar :");
    scanf("%d", &lebar);

    luas = panjang*lebar;

    printf("Luas =%d\n",luas);

    return 0;
}