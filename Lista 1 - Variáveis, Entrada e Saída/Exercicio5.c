#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um valor do tipo float e depois o imprima usando
o operador “%d”. Veja o que aconteceu.*/

int main () {
    float valor;
    printf("Digite um valor: ");
    scanf("%f",&valor);
    printf("Valor lido: %d",valor);
    return 0;
}

/*O programa lê um valor float com "%f", mas ao imprimir com "%d" que é o
especificador de inteiro, ele é forçado a interpretar um floatcomo um inteiro.
Isso causa um comportamento estranho, em meu computador, ele retorna
números inteiros aleatórios.*/
