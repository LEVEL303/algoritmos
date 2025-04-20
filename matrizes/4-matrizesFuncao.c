#include <stdio.h>

void lerMatriz(int matriz[][2], int linhas, int colunas) {
    for(int i = 0; i < linhas; i++) {
        printf("////////LINHA %d////////\n", i);
        for(int j = 0; j < colunas; j++) {
            printf("Coluna %d:\n", j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void buscarInMatriz(int matriz[][2], int linhas, int colunas, int valorBusca) {
    printf("O numero %d aparece nas celulas:\n", valorBusca);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(matriz[i][j] == valorBusca) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}

int main() {
    int m[3][2], numBusca;
    printf("\nInforme os valores da matriz:\n");
    lerMatriz(m, 3, 2);
    printf("Digite um numero para buscar na matriz:\n");
    scanf("%d", &numBusca);
    buscarInMatriz(m, 3, 2, numBusca);
}