#include <stdio.h>
#include <stdlib.h>

#define LINHAS 100
#define COLUNAS 100

int main() {
    
    int matriz[LINHAS][COLUNAS];


    int *ptr = &matriz[0][0];
    for (int i = 0; i < LINHAS * COLUNAS; i++) {
        *(ptr + i) = 0;
    }


    int numero = 1;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            *(ptr + i * COLUNAS + j) = numero++;
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%6d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}