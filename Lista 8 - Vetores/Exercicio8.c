#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor com 10 números reais. Em
seguida, calcule e mostre na tela a quantidade de números negativos e a soma
dos números positivos desse vetor.*/

int main () {
    int vet[10];
    int N=0, S=0;
    printf("Digite 10 numeros inteiros:\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i=0; i<10; i++) {
        if(vet[i]<0) {
            N++;
        }
        if (vet[i]>=0) {
            S+=vet[i];
        }
    }
    printf("A quantidade de valores negativos contidos no vetor e: %d\nA soma dos numeros positivos do vetor e: %d\n", N, S);
    return 0;
}
