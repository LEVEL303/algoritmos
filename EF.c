#include <stdio.h>

int main() {
    int valor, valoresNegativos = 0;
    for(int i = 1; i <= 5; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        if(valor < 0) {
            valoresNegativos++;
        }
    }
    if(valoresNegativos == 1) {
        printf("Voce digitou 1 valor negativo\n");
    } else {
        printf("Voce digitou %d valores negativos\n", valoresNegativos);
    }

    printf("===========================================================================\n");

    float salario, somaSalario = 0;
    for(int i = 1; i <= 3; i++) {
        printf("Digite o valor do salario do funcionario:\n");
        scanf("%f", &salario);
        somaSalario = somaSalario + salario;
    }
    printf("A soma dos salarios e de R$ %.2f\n", somaSalario);

    printf("==========================================================================\n");

    float salario2;
    for(int i = 1; i <= 5; i++) {
        printf("Informe o valor do salario:\n");
        scanf("%f", &salario2);
        if(salario2 >= 2000) {
            printf("%.2f\n", salario2);
        }
    }

    printf("===========================================================================\n");

    float salario3, novoSalario3;
    for(int i = 1; i <= 3; i++) {
        printf("Informe o valor do salario:\n");
        scanf("%f", &salario3);
        novoSalario3 = salario3 + (salario3 * 50 / 100);
        printf("%.2f\n", novoSalario3);
    }
}



