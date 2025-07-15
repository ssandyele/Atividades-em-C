#include <stdio.h>
#include <stdlib.h>


/*Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos
divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

int main () {
    int num, soma=0, div;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    div=num-1;
    do {
        if (num%div==0) {
            soma=soma+div;
        }
        div--;
    } while (div!=0);
    printf("Soma de todos os divisores desse numero, com excecao dele proprio: %d\n", soma);
    return 0;
}
