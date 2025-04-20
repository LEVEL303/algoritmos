#include <stdio.h>

int main() {
    int valores[4], numBusca, i;
    printf("Informe os quatro valores:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &valores[i]);
    }
    printf("Informe o numero para buscar:\n");
    scanf("%d", &numBusca);
    printf("O numero %d aparece nas posicoes:\n", numBusca);
    for(i = 0; i < 4; i++) {
        if(valores[i] == numBusca) {
            printf("%d\n", i);
        }
    }
}