#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;
    arquivo = fopen("dados.int", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1; 
    }

    printf("Digite inteiros (digite 0 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        fwrite(&numero, sizeof(int), 1, arquivo);
    }

      fclose(arquivo);

    return 0;
}