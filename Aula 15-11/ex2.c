#include <stdio.h>
#include <stdbool.h>

bool checkPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fim;
    printf("Digite o intervalo (dois números inteiros separados por espaço): ");
    scanf("%d %d", &inicio, &fim);
    if (inicio >= fim) {
        printf("Intervalo inválido. O segundo número deve ser maior que o primeiro.\n");
        return 1; 
    }
    printf("Números primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (checkPrimo(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
