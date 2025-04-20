#include <stdio.h>

int main() {
    int valores[4], i, quantPosi = 0;
    printf("Informe os quatro valores:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &valores[i]);
        if(valores[i] > 0) {
            quantPosi++;
        }
    }
    printf("O vetor apresenta %d valores positivos\n", quantPosi);
}