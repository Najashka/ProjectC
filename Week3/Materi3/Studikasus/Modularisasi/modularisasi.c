#include <stdio.h>

int tambah(int a, int b) {
   return a + b;
}

int kali(int a, int b) {
   return a * b;
}

int main() {
   printf("Pertambahan: %d\n", tambah(2,3));
   printf("Perkalian: %d\n", kali(2,3));
}
