#include <stdio.h>
#include "math_utils.h"

int main(void) {
    int data[] = {10, 20, 30, 40};
    int n = sizeof(data)/sizeof(data[0]);
    printf("avg = %.2f\n", average(data, n));
    printf("max = %d\n", find_max(data, n));
    return 0;
}