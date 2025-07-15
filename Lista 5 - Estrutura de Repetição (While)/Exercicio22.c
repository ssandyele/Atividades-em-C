#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que leia os limites inferior e superior de um intervalo e imprima
todos os números pares no intervalo aberto e seu somatório. Suponha que os dados
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o
segundo.*/

int main () {
    int inf, sup, soma;
    printf("Digite o limite inferior do intervalo:\n");
    scanf("%d", &inf);
    printf("Digite o limite superior do intervalo:\n");
    scanf("%d", &sup);
    inf++;
    while(inf<sup){
        if (inf%2==0) {
            printf("%d ", inf);
            soma=soma+inf;
        }
        inf++;
    }
    printf("\nSomatorio: %d\n", soma);
    return 0;
}
