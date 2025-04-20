#include <stdio.h>

int main() {
    char frase[11];

    int tamanho = sizeof(frase);
    printf("%d\n", tamanho);

    printf("Digite a frase:\n");
    fgets(frase, tamanho, stdin);
    printf("%s\n", frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        printf("%d-%c\n", i, frase[i]);
    }

    printf("==========================\n");

    char string[11];
    printf("Digite o texto:\n");
    scanf("%10s", string);

    for(int i = 0; string[i] != '\0'; i++) {
        printf("%d-%c\n", i, string[i]);
    }
}