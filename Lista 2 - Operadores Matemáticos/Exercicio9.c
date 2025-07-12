#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que leia o valor de um depósito e o valor da taxa de juros.
Calcular e imprimir o valor do rendimento e o valor total depois do rendimento
(rendimento mensal e anual).*/

int main () {
    float c, i, js, jsa, vt, jc, jca;
    printf("Digite o valor do deposito: R$");
    scanf("%f", &c);
    printf("Digite o valor da taxa de juros mensal:");
    scanf("%f", &i);
    i=i/100;
    printf("\nJUROS SIMPLES\n");
    js=c*i;
    jsa=c*i*12;
    printf("O valor do rendimento e R$%.2f ao mes e R$%.2f ao ano\n", js, jsa);
    vt=c+js;
    printf("O valor total em um mes sera: R$%.2f\n", vt);
    vt=c+jsa;
    printf("O valor total em um ano sera: R$%.2f\n", vt);
    printf("\nJUROS COMPOSTOS\n");
    jc=c*(1+i)-c;
    jca=c*(pow((1+i),12))-c;
    printf("O valor do rendimento e R$%.2f ao mes e R$%.2f ao ano\n", jc, jca);
    vt=c*(1+i);
    printf("O valor total em um mes sera: R$%.2f\n", vt);
    vt=c*pow((1+i),12);
    printf("O valor total em um ano sera: R$%.2f\n", vt);
    return 0;
}
