#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário um vetor X com 10 posições. Em
seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

int main () {
    int vet[10];
    int maior, menor;
    printf("Digite 10 numeros inteiros:\n");
    for(int i=0; i<10; i++) {
        scanf("%d", &vet[i]);
    }
    maior=vet[0];
    menor=vet[0];
    for (int i=1; i<10; i++) {
        if (vet[i]>maior){
            maior=vet[i];
        }
        if (vet[i]<menor) {
            menor=vet[i];
        }
    }
    printf("O maior valor no vetor e: %d\nO menor valor no vetor e: %d\n", maior, menor);
    return 0;
}
