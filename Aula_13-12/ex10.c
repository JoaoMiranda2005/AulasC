#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main() {
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    int resultado = somaRecursiva(N);

    printf("A soma dos números de 1 até %d é: %d\n", N, resultado);

    return 0;
}