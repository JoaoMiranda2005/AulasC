
#include <stdio.h>
#include <stdlib.h>

void trocar(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indice_menor = i;
        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *arr[indice_menor]) {
                indice_menor = j;
            }
        }
        if (indice_menor != i) {
            trocar(&arr[i], &arr[indice_menor]);
        }
    }
}

int main() {
    int *arrayDeApontadores[10];
    printf("Insira 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        arrayDeApontadores[i] = (int *)malloc(sizeof(int));
        scanf("%d", arrayDeApontadores[i]);
    }
    ordenar(arrayDeApontadores, 10);

    printf("Lista ordenada:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *arrayDeApontadores[i]);
    }
    for (int i = 0; i < 10; i++) {
        free(arrayDeApontadores[i]);
    }
    return 0;
}
