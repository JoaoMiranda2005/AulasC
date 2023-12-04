#include <stdio.h>
struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float mediaFinal;
};

int main() {
    struct Aluno turma[10];
    int numAlunos;
    printf("Digite o número de alunos na turma (até 10): ");
    scanf("%d", &numAlunos);
    if (numAlunos <= 0 || numAlunos > 10) {
        printf("Número de alunos inválido. O programa será encerrado.\n");
        return 1;  
    }


    for (int i = 0; i < numAlunos; i++) {
        printf("\nDados do Aluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nome: ");
        scanf("%s", turma[i].nome);

        printf("Código da Disciplina: ");
        scanf("%d", &turma[i].codigoDisciplina);

        printf("Nota1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota2: ");
        scanf("%f", &turma[i].nota2);

        turma[i].mediaFinal = (turma[i].nota1 + 2 * turma[i].nota2) / 3;
    }

    printf("\nListagem Final dos Alunos:\n");
    printf("Matricula | Nome                | Código da Disciplina | Nota1 | Nota2 | Média Final\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("%-10d %-20s %-21d %-6.2f %-6.2f %-10.2f\n", turma[i].matricula, turma[i].nome,
               turma[i].codigoDisciplina, turma[i].nota1, turma[i].nota2, turma[i].mediaFinal);
    }

    return 0;
}
