#include <stdio.h>
#include <string.h>

int compararStrings(char string1[], char string2[]) {
    for(int i = 0; string1[i] != '\0' || string2[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char texto1[21], texto2[21];
    printf("Digite algum texto:\n");
    scanf("%20s", texto1);
    printf("Digite mais um texto:\n");
    scanf("%20s", texto2);

    int resultado = compararStrings(texto1, texto2);
    printf("%d\n", resultado);

    if(resultado == 0) {
        printf("Os textos sao iguais\n");
    } else {
        printf("Os textos sao diferentes\n");
    }

    printf("===============================================\n");

    char text1[11], text2[11];
    printf("Digite o primeiro texto:\n");
    scanf("%10s", text1);
    printf("Digite o segundo texto:\n");
    scanf("%10s", text2);

    int r = strcmp(text1, text2);
    printf("%d\n", r);

    if(r == 0) {
        printf("Os textos sao iguais\n");
    } else {
        printf("Os textos sao diferentes\n");
    }
}
