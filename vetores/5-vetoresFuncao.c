#include <stdio.h>

void lerValores(int valores[]) {
    int quantSpace = sizeof(valores);
    for(int i = 0; i < quantSpace; i++) {
        scanf("%d", &valores[i]);
    }
}
void buscarInVetor(int valorBusca, int vetor[]) {
    printf("O numero %d aparece nas posicoes:\n", valorBusca);
    int quantValores = sizeof(vetor);
    for(int i = 0; i < quantValores; i++) {
        if(vetor[i] == valorBusca) {
            printf("%d\n", i);
        }
    }
}
void imprimirVetor(int vetor[]) {
    printf("O vetor contem os elementos:\n");
    int tamanho = sizeof(vetor);
    for(int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}

int main() {
    int v[4], numBusca;
    printf("Informe os quatro valores:\n");
    lerValores(v);
    printf("Informe o numero para buscar:\n");
    scanf("%d", &numBusca);
    buscarInVetor(numBusca, v);
    imprimirVetor(v);
}