#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia um número e informe se ele é divisível por 10, por
5 ou por 2 ou se não é divisível por nenhum deles.*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num%10==0) {
        printf("O numero e divisivel por 10, por 5 e por 2\n");
    }
    else if (num%5==0) {
        printf("O numero e divisivel por 5\n");
    }
    else if (num%2==0) {
        printf("O numero e divisivel por 2\n");
    }
    else {
        printf("O numero nao e divisivel por 10, nem por 5, nem por 2");
    }

    return 0;
}
