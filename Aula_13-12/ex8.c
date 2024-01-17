#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, *p;
    x = 10;

    p = (int*)malloc(sizeof(int));


    if (p == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }


    *p = x;


    free(p);

    return 0;
}