#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.*/

int main () {
    int N, i, div;
    printf("Digite um numero inteiro maior do que 1:\n");
    scanf("%d", &N);
    for(;N<=1;){
        printf("Digite um numero inteiro MAIOR DO QUE 1:\n");
        scanf("%d", &N);
    }
    for(i=1, div=0;i<=N;i++){
        if (N%i==0){
            div++;
        }
    }
    if(div==2){
        printf("O numero %d e primo!", N);
    } else {
        printf("O numero %d NAO e primo!", N);
    }
    return 0;
}
