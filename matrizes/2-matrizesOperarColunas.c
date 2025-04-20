#include <stdio.h>

int main() {
    int matriz[3][2], somaColun = 0, i, j;
    printf("\tInforme os valores da matriz:\n");
    for(i = 0; i < 3; i++) {
        printf("Valores da linha %d:\n", i);
        for(j = 0; j < 2; j++) {
            printf("Coluna %d:\n", j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        somaColun = somaColun + matriz[i][1];
    }
    printf("A soma dos valores da coluna de indice 1 eh %d.\n", somaColun);
}