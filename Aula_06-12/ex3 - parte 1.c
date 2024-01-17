#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numero;
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}