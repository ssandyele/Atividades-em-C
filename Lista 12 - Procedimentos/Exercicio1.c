#include <stdio.h>
#include <stdlib.h>

/*Elabore um Algoritmo que leia um valor inteiro e chame um procedimento
que imprima se o valor é par ou ímpar.*/

void paridade (int i) {
    if (i%2==0) {
        printf("O numero e par!\n");
    } else
        printf("O numero e impar!\n");
}

int main() {
   int n;
   printf("Digite um numero inteiro: ");
   scanf("%d", &n);
   paridade(n);
   return 0;
}