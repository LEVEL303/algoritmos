#include <stdio.h>
#include <string.h>

int quantCaracteres(char text[]) {
    int quant = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        quant++;
    }
    return quant;
}

int main() {
    char text[101];
    printf("Digite algum texto:\n");
    scanf("%100s", text);
    int quant = quantCaracteres(text);
    printf("%d\n", quant);

    printf("==========================================\n");

    char palavra[21];
    printf("Digite uma palavra:\n");
    scanf("%20s", palavra);
    int quantidade = strlen(palavra);
    printf("%d\n", quantidade);

    printf("==========================================\n");

    char texto[101];
    printf("Digite o texto para realizar a verificacao:\n");
    scanf("%s", texto);
    if(strlen(texto) <= 80) {
        printf("Sim");
    } else {
        printf("Nao");
    }
}