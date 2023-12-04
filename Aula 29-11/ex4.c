#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHAS 50
#define TAMANHO_MAXIMO_LINHA 100

int main() {
    char *linhas[MAX_LINHAS];
    char entrada[TAMANHO_MAXIMO_LINHA];

    for (int i = 0; i < MAX_LINHAS; ++i) {
        linhas[i] = NULL;
    }

    printf("Digite as linhas de texto. Digite 'FIM' para terminar o programa:\n");

    int contador = 0;

    while (contador < MAX_LINHAS) {
        fgets(entrada, TAMANHO_MAXIMO_LINHA, stdin);

        entrada[strcspn(entrada, "\n")] = '\0';
        
        if (strcmp(entrada, "FIM") == 0) {
            break;
        }

        linhas[contador] = malloc(strlen(entrada) + 1);
        strcpy(linhas[contador], entrada);

        ++contador;
    }

    FILE *arquivo = fopen("editor_texto.txt", "w");

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (int i = 0; i < contador; ++i) {
        fprintf(arquivo, "%s\n", linhas[i]);
        free(linhas[i]);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("O conteúdo foi gravado no arquivo: editor_texto.txt\n");

    return 0;
}
