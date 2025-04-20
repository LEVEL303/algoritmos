#include <stdio.h>

int main() {
    char testeString[4], testeCaracter;
        
    printf("Digite algo:\n");
    scanf("%c", &testeCaracter);
    printf("%c\n", testeCaracter);

    printf("======================================\n");

    printf("Digite algo:\n");
    scanf("%4s", testeString);
    printf("%s\n", testeString);

    return 0;
}