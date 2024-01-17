#include <stdio.h>

double power(double a, int b) {

    if (b == 0) {
        return 1.0;
    }

    else if (b == 1) {
        return a;
    }

    else if (b > 0) {
        return a * power(a, b - 1);
    }

    else {
        return 1.0 / power(a, -b);
    }
}

int main() {
    double base;
    int expoente;


    printf("Digite a base (a): ");
    scanf("%lf", &base);

    printf("Digite o expoente (b): ");
    scanf("%d", &expoente);


    double resultado = power(base, expoente);

    printf("%lf elevado a %d é: %lf\n", base, expoente, resultado);

    return 0;
}