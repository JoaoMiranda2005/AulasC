#include <stdio.h>

int main() {
    int alturaPredioCm = 12300;
    int taxaSubida = 12;
    int taxaEscorregamento = 2.5;
    int alturaAtual = 0;
    int dias = 0;
    while (alturaAtual < alturaPredioCm) {
        alturaAtual += taxaSubida;
        if (alturaAtual >= alturaPredioCm) {
            break;
        }
        alturaAtual -= taxaEscorregamento;
        dias++;
    }
    printf("O caracol levará %d dias para subir um prédio de 123 metros.\n", dias);
    return 0;
}
