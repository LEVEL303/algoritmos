#include <stdio.h>

int main() {
    int matriz[3][2], somaRow = 0, i, j;
    printf("Informe os valores da matriz:\n");
    for(i = 0; i < 3; i++) {
        printf("Linha %d:\n", i);
        for(j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(j = 0; j < 2; j++) {
        somaRow = somaRow + matriz[1][j];
    }
    printf("A soma dos valores na linha de indice 1 eh %d\n", somaRow);
    return 0;
}