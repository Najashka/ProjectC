#include "math_utils.h"

double average(int *arr, int n) {
    if (n == 0) return 0.0;
    long sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    return (double)sum / n;
}

int find_max(int *arr, int n) {
    if (n <= 0) return 0; // or INT_MIN
    int m = arr[0];
    for (int i = 1; i < n; ++i) if (arr[i] > m) m = arr[i];
    return m;
}
