#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro e depois o imprima usando o
operador “%f”. Veja o que aconteceu.*/

int main () {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor);
    printf("Valor lido: %f",valor );
    return 0;
}

/*O programa lê um número inteiro com "%d", mas ao imprimir com "%f" que é o
especificador de ponto flutuante (float), ele é forçado a interpretar um inteiro
como um float. Isso causa um comportamento aleatório, em meu computador, ele retorna
qualquer número como "0.000000".*/
