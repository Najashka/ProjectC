#include <stdio.h>

int main(){
    double a, b, result;
    char op;

    printf("Masukan operasi (format: 3.5 + 4.2): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Input tidak valid\n");
        return 1;
    }

    switch (op) {
        case '+' : result = a + b; break;
        case '-' : result = a - b; break;
        case '*' : result = a * b; break;
        case '/' : result = a / b; break;
            if (b == 0) { printf( "Error : pembagian dengan nol\n");
            return 1;}
            
            result = a / b; break;
    }

    printf("%.6g %c %.6g = %.6g\n", a, op, b, result);
    return 0;
}