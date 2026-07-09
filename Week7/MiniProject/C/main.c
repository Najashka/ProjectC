#include <stdio.h>

float hitungTotal(float harga[], int jumlah) {

   float total = 0;

   for(int i = 0; i < jumlah; i++) {
       total += harga[i];
   }

   return total;
}

int main() {

   int jumlah;

   printf("Jumlah barang: ");
   scanf("%d", &jumlah);

   float harga[jumlah];

   for(int i = 0; i < jumlah; i++) {

       printf("Harga barang %d: ", i+1);
       scanf("%f", &harga[i]);
   }

   float total = hitungTotal(harga, jumlah);

   printf("Total: %.2f\n", total);

   return 0;
}