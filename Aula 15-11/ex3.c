#include <stdio.h>

int main() {
    int numVotantes, voto;
    int votosA = 0, votosB = 0, votosC = 0;

    printf("Digite o número total de Cidadões que vão votar: ");
    scanf("%d", &numVotantes);

    if (numVotantes <= 0) {
        printf("Número de votantes inválido. O programa será encerrado.\n");
        return 1; 
    }

    for (int i = 1; i <= numVotantes; i++) {
        printf("Cidadão %d, escolha um candidato (1 para A, 2 para B, 3 para C): ", i);
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                votosA++;
                break;
            case 2:
                votosB++;
                break;
            case 3:
                votosC++;
                break;
            default:
                printf("Voto inválido. Tente novamente.\n");
                i--;
        }
    }

    printf("Resultado da eleição:\n");
    printf("Candidato A: %d votos\n", votosA);
    printf("Candidato B: %d votos\n", votosB);
    printf("Candidato C: %d votos\n", votosC);

    return 0;
}
