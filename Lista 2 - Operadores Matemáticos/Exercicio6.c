#include <stdio.h>
#include <stdlib.h>

/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de
comissão para o garçom. Crie um Algoritmo que leia o valor gasto com despesas
realizadas em um restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.*/

int main () {
    float gasto, gorjeta, total;
    printf("Digite o valor gasto no restaurante: R$");
    scanf("%f", &gasto);
    gorjeta=gasto*10/100;
    printf("O valor da gorjeta e: R$%.2f", gorjeta);
    total=gasto+gorjeta;
    printf("\nO valor total a ser pago e: R$%.2f", total);
    return 0;
}
