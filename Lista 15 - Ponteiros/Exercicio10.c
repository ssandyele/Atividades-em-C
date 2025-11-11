#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float contendo 10
elementos. Imprima o endereço de cada posição desse array.*/

int main() {
    int N=10;
   float vet[N];
   float *p=vet;

   printf("--- ENDERECOS DE CADA POSICAO DO ARRAY CRIADO ---\n");
   for(p=vet;p<vet+N; p++) {
    printf("%p\n", p);
   }
    return 0;
}