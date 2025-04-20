#include <stdio.h>

int main() {
    int valores[4], i, somaPosi = 0;
    printf("Informe os quatro valores:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &valores[i]);
        if(valores[i] > 0) {
            somaPosi = somaPosi + valores[i];
        }
    }
    printf("A soma dos valores positivos e %d.\n", somaPosi);
}