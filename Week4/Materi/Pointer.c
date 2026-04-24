#include <stdio.h>

int main() {

   int x = 10;
   int *p;

   p = &x;

   printf("Nilai x: %d\n", x);
   printf("Alamat x: %p\n", &x);
   printf("Pointer p: %p\n", p);
   printf("Isi pointer: %d\n", *p);

   return 0;
}
