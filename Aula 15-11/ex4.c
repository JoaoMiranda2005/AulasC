#include <stdio.h>

void ordenarArray(int array[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void separarParesImpares(int array[], int tamanho, int pares[], int impares[], int *tamPares, int *tamImpares) {
    *tamPares = 0;
    *tamImpares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            pares[*tamPares] = array[i];
            (*tamPares)++;
        } else {
            impares[*tamImpares] = array[i];
            (*tamImpares)++;
        }
    }

    ordenarArray(pares, *tamPares);
    ordenarArray(impares, *tamImpares);
}

int main() {

    int array[12];
    int pares[12], impares[12];
    int tamPares, tamImpares;

    printf("Digite 12 números inteiros separados por espaço:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &array[i]);
    }

    ordenarArray(array, 12);

    separarParesImpares(array, 12, pares, impares, &tamPares, &tamImpares);

    printf("\nArray ordenado ascendentemente:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nGrupo de pares ordenado ascendentemente:\n");
    for (int i = 0; i < tamPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nGrupo de ímpares ordenado ascendentemente:\n");
    for (int i = 0; i < tamImpares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
