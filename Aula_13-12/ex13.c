#include <stdio.h>

void torreDeHanoi(int n, char origem, char destino, char trabalho) {
   
    if (n == 1) {
        printf("Mova o disco 1 da torre %c para a torre %c\n", origem, destino);
        return;
    }


    torreDeHanoi(n - 1, origem, trabalho, destino);


    printf("Mova o disco %d da torre %c para a torre %c\n", n, origem, destino);

    torreDeHanoi(n - 1, trabalho, destino, origem);
}

int main() {
    int numDiscos;

    printf("Digite o número de discos: ");
    scanf("%d", &numDiscos);
    torreDeHanoi(numDiscos, 'A', 'C', 'B');

    return 0;
}