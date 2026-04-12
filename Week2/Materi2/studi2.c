#include <stdio.h>

int main(){
    int gaji, bonus, total;

    printf("Masukan gaji : ");
    scanf("%d", &gaji);

    printf("Masukan bonus : ");
    scanf("%d", &bonus);

    total = gaji + bonus;

    printf("Total gaji : %d\n", total);

    return 0;
}