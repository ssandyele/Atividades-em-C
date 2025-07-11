#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro e depois imprima a
mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando
printf().*/

int main () {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor);
    printf("Valor lido: %d",valor );
    return 0;
}
