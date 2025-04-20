#include <stdio.h>

void imprima(char palavra[]) {
    for(int i = 0; palavra[i] != '\0'; i++) {
        printf("%c", palavra[i]);
    }
}

int main() {
    char palavra[21];
    printf("Digite uma palavra:\n");
    scanf("%20s", palavra);
    imprima(palavra);
}