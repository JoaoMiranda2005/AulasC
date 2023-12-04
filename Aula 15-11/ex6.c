#include <stdio.h>

int main() {
    float num1, num2;
    int opcao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    
    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");


    printf("Digite o número da operação desejada: ");
    scanf("%d", &opcao);

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
