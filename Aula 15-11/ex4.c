#include <stdio.h>

// Função para ordenar um array
void ordenarArray(int array[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (array[i] > array[j]) {
                // Troca os elementos se estiverem fora de ordem
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Função para separar o array em dois grupos: pares e ímpares
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

    // Ordena os grupos separadamente
    ordenarArray(pares, *tamPares);
    ordenarArray(impares, *tamImpares);
}

int main() {
    // Declaração de variáveis
    int array[12];
    int pares[12], impares[12];
    int tamPares, tamImpares;

    // Solicita os elementos do array ao usuário
    printf("Digite 12 números inteiros separados por espaço:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &array[i]);
    }

    // Ordena o array principal
    ordenarArray(array, 12);

    // Separa o array em pares e ímpares
    separarParesImpares(array, 12, pares, impares, &tamPares, &tamImpares);

    // Exibe os resultados
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
