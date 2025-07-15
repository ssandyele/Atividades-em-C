#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário
escolhe uma das opções, e o seu programa pede dois valores numéricos e
realiza a operação, mostrando o resultado*/

int main () {
    int op;
    float a, b, res;
    printf("Escolha uma operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &op);
    printf("Digite dois valores:\n");
    scanf("%f %f", &a, &b);
    switch (op) {
    case 1:
        res = a + b;
        printf("O resultado e: %.2f\n", res);
        break;
    case 2:
        res = a - b;
        printf("O resultado e: %.2f\n", res);
        break;
    case 3:
        res = a * b;
        printf("O resultado e: %.2f\n", res);
        break;
    case 4:
        res = a / b;
        printf("O resultado e: %.2f\n", res);
        break;
    default:
        printf("ERRO! Operacao invalida.\n");
    }
    return 0;
}
