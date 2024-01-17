#include <stdio.h>

int main() {
    int y, *p, x;

    // Inicializa a variável y com 0.
    y = 0;

    // O ponteiro p recebe o endereço de y.
    p = &y;

    // A variável x recebe o valor apontado por p, que é o valor de y (0).
    x = *p;

    // A variável x é atribuída o valor 4.
    x = 4;

    // Incrementa o valor apontado por p (o valor de y) em 1. Agora y é 1.
    (*p)++;

    // Decrementa o valor de x em 1. Agora x é 3.
    x--;

    // Adiciona o valor de x ao valor apontado por p (o valor de y). Agora y é 4.
    (*p) += x;

    // Imprime o valor final de y.
    printf("y=%d\n", y);

    return 0;
}