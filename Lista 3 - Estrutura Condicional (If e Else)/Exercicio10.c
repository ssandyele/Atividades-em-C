#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia um número e informe se ele é ou não divisível por
5*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num%5==0) {
      printf("O numero %d e divisivel por 5", num);
    }
    else{
      printf("O numero %d NAO e divisivel por 5", num);
    }
    return 0;
}
