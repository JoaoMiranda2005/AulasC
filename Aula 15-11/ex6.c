#include <stdio.h>

int main() {
    // Declaração de variáveis
    float num1, num2;
    int opcao;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Exibe as opções de operações
    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    // Solicita a escolha do usuário
    printf("Digite o número da operação desejada: ");
    scanf("%d", &opcao);

    // Realiza a operação com base na escolha do usuário e exibe o resultado
    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            // Verifica se o segundo número é diferente de zero antes de realizar a divisão
            if (num2 != 0) {
                printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Erro: divisão por zero não permitida.\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
    }

    return 0;
}
