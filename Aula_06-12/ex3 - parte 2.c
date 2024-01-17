#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.bin", "rb");

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numero;
    while (fread(&numero, sizeof(int), 1, arquivo) == 1) {
        printf("%d\n", numero);
    }
    fclose(arquivo);

    return 0;
}