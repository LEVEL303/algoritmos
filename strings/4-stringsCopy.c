#include <stdio.h>
#include <string.h> 

void copiarString(char string1[], char string2[]) {
    int i;
    for(i = 0; string2[i] != '\0'; i++){
        string1[i] = string2[i];
    }
    printf("%d\n", i);
    string1[i] = '\0';
}

int main() {
    char stringI[21], stringII[21];

    printf("Digite algum texto:\n");
    scanf("%20s", stringII);
    scanf("%20s", stringI);

    copiarString(stringI, stringII);
    printf("O texto copiado na string foi: %s\n", stringI);

    printf("=================================\n");

    char texto1[11], texto2[11];
    printf("Digite o texto:\n");
    scanf("%10s", texto1);
    strcpy(texto2, texto1);
    printf("O texto copiado na string foi: %s\n", texto2);

    return 0;
}