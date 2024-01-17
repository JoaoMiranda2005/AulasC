#include <stdio.h>

int main() {
    FILE *ficheiro = fopen("dados.bin", "wb");

    if (ficheiro == NULL) {
        fprintf(stderr, "Erro ao abrir o ficheiro.\n");
        return 1;
    }

    for (int i = 1; i <= 100; ++i) {
        fwrite(&i, sizeof(int), 1, ficheiro);
    }

    fclose(ficheiro);

    printf("O ficheiro binário foi criado com sucesso: dados.bin\n");

    return 0;
}