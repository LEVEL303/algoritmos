#include <stdio.h>

int main() {
    int quantidade, i;
    printf("Informe a quantidade de valores:\n");
    scanf("%d", &quantidade);
    int vetorInteiros[quantidade];
    for(i = 0; i < quantidade; i++) {
        scanf("%d", &vetorInteiros[i]);
    }
    printf("Resultado:\n");
    for(i-- ; i >= 0; i--) {
        printf("%d\n", vetorInteiros[i]);
    }
}