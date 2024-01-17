#include <stdio.h>

int main() {
    FILE *ficheiro = fopen("dados.txt", "w");

    if (ficheiro == NULL) {
        fprintf(stderr, "Erro ao abrir o ficheiro.\n");
        return 1;
    }


    for (int i = 1; i <= 100; ++i) {
        fprintf(ficheiro, "%d\n", i);
    }


    fclose(ficheiro);

    printf("O ficheiro foi criado com sucesso: dados.txt\n");

    return 0;
}