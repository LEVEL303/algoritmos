#include <stdio.h>

int main() {
    char string[21];
    printf("Digite uma frase:\n");
    fgets(string, sizeof(string), stdin);
    int tamanho = sizeof(string);
    printf("%d\n", tamanho);
    printf("%s\n", string);
}