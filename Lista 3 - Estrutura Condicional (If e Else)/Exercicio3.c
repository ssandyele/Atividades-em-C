#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo que determine (imprima) se um dado número N inteiro
(recebido através do teclado) é PAR ou ÍMPAR.*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num%2==0) {
        printf("O numero e par\n");
    }
    else
        printf("O numero e impar\n");
    return 0;
}
