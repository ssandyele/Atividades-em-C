#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo para determinar se um dado número N (recebido através
do teclado) é POSITIVO, NEGATIVO ou NULO.*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num>0){
        printf("O numero e positivo\n");
    }
    else if (num<0){
        printf("O numero e negativo\n");
    }
    else
        printf("O numero e zero\n");
    return 0;
}
