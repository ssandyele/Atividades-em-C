#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

int main () {
    int i=1, N, qnt=0, linha=1;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);
    for (i=1, qnt=1,linha=1;linha<=N;qnt++,i++){
        printf("%d ", i);
        if(qnt==linha){
            printf("\n");
            linha++;
            qnt=0;
        }
    }
    return 0;
}
