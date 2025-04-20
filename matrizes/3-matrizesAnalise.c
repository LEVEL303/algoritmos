#include <stdio.h>

int main() {
    int matriz[3][2], i, j, numBusca;
    printf("\tInforme os valores da matriz:\n");
    for(i = 0; i < 3; i++) {
        printf("Linha de indice %d:\n", i);
        for(j = 0; j < 2; j++) {
            printf("Coluna %d:\n", j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe um numero para buscar na matriz:\n");
    scanf("%d", &numBusca);
    printf("O numero %d aparece nas celulas:\n", numBusca);
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(matriz[i][j] == numBusca) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}