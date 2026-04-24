#include <stdio.h>

int main() {
    int nilai[5];
    int total = 0;

    for(int i = 0; i < 5; i++) {
        printf("Masukan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    printf("Rata-rata: %.2f\n", total / 5.0);

    return 0;
}