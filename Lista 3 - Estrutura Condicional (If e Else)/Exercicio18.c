#include <stdio.h>
#include <stdlib.h>

/*Construir um Algoritmo que leia um número e imprima se ele é igual a 5, a 200, a
400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos
escopos anteriores.*/

int main () {
    int num;
    printf("Digite um numero;\n");
    scanf("%d", &num);
    if (num==5) {
        printf("O numero e 5\n");
    }
    else if (num==200){
        printf("O numero e 200\n");
    }
    else if (num==400){
        printf("O numero e 400\n");
    }
    else if(num>500 && num<1000){
        printf("O numero esta entre 500 e 1000");
    }
    else {
        printf("O numero nao atende a nenhum dos escopos declarados");
    }
    return 0;
}
