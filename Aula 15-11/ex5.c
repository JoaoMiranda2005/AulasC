#include <stdio.h>

int main() {
    // Altura do prédio em centímetros
    int alturaPredioCm = 12300; // 1 metro = 100 centímetros

    // Taxa de subida e escorregamento do caracol em centímetros por dia
    int taxaSubida = 12;
    int taxaEscorregamento = 2.5;

    // Variáveis para rastrear a altura atual do caracol e o número de dias
    int alturaAtual = 0;
    int dias = 0;

    // Loop enquanto a altura atual for menor que a altura do prédio
    while (alturaAtual < alturaPredioCm) {
        alturaAtual += taxaSubida;      // Caracol sobe
        if (alturaAtual >= alturaPredioCm) {
            break;  // Verifica se o caracol já atingiu ou ultrapassou a altura do prédio
        }
        alturaAtual -= taxaEscorregamento; // Caracol escorrega
        dias++;  // Incrementa o número de dias
    }

    // Exibe o resultado
    printf("O caracol levará %d dias para subir um prédio de 123 metros.\n", dias);

    return 0;
}
