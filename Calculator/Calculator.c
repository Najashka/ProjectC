#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX_HISTORY 100

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void tampilHistory(double history[], int count) {
    printf("History:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %.2lf\n", i + 1, history[i]);
    }
}

double hitung(double a, double b, char op[]) {
    if (strcmp(op, "+") == 0) return a + b;
    if (strcmp(op, "-") == 0) return a - b;
    if (strcmp(op, "*") == 0) return a * b;
    if (strcmp(op, "/") == 0) {
        if (b != 0) return a / b;
        printf("Error! Tidak bisa dibagi nol.\n");
        return 0;
    }
    if (strcmp(op, "**") == 0) return pow(a, b);

    printf("Operator tidak valid!\n");
    return 0;
}

int main() {
    double a, b, hasil;
    char op[10];
    double history[MAX_HISTORY];
    int count = 0;

    printf("\n=== Kalkulator ===\n");

    // looping input
    while (1) {
        printf("\nInput (Operasi, sqrt = √(akar), exit = selesai): ");

        // input keluar atau sqrt
        scanf("%s", op);

        if (strcmp(op, "exit") == 0) break;

        if (strcmp(op, "sqrt") == 0) {
            scanf("%lf", &a);
            if (a >= 0) {
                hasil = sqrt(a);
            } else {
                printf("Error! Akar negatif.\n");
                continue;
            }
        } else {
            // input dari awal string > double
            char *end; // konversi ke double
            a = strtod(op, &end);

                if (*end != '\0') {
                    printf("Input tidak valid!\n");
                    clearInputBuffer();
                    continue;
                }                                       
            scanf("%s %lf", op, &b);

            // validasi operator
            if (strcmp(op, "+") != 0 &&
                strcmp(op, "-") != 0 &&
                strcmp(op, "*") != 0 &&
                strcmp(op, "/") != 0 &&
                strcmp(op, "**") != 0) {
                printf("Operator tidak valid!\n");
                 clearInputBuffer();
                continue;
            }

            hasil = hitung(a, b, op);
        }

        printf("Hasil: %.2lf\n", hasil);

        if (count < MAX_HISTORY) {
            history[count++] = hasil;
        }

        tampilHistory(history, count);
    }

    printf("Program selesai.\n");
    return 0;
}