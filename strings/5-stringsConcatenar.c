#include <stdio.h>
#include <string.h>

void concatenar(char string1[], char string2[], char newString[]) {
    int i;
    for(i = 0; string1[i] != '\0'; i++) {
        newString[i] = string1[i];
    }
    for(int a = 0; string2[a] != '\0'; a++) {
        newString[i] = string2[a];
        i++;
    }
    newString[i] = '\0';
}

int main() {
    char s1[21], s2[21], stringsC[41];
    printf("Digite a primeira string:\n");
    scanf("%20s", s1);
    printf("Digite a segunda string:\n");
    scanf("%20s", s2);
    concatenar(s1, s2, stringsC);
    printf("%s\n", stringsC);

    printf("=================================\n");

    char sI[21], sII[21];
    printf("Primeira string:\n");
    scanf("%20s", sI);
    printf("Segunda string:\n");
    scanf("%20s", sII);
    strcat(sI, sII);
    printf("%s\n", sI);
}