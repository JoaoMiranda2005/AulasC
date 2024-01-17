#include <stdio.h>

int mdcRecursivo(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdcRecursivo(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = mdcRecursivo(num1, num2);

    printf("O Máximo Divisor Comum (MDC) de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}