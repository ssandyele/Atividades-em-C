#include <stdio.h>
#include <stdlib.h>

/*Faça uma função em Algoritmo que converta horas, minutos e segundos em
segundos. A função recebe os valores das horas minutos e segundos e
retorna o total de segundos.*/

int conversor (int H, int M, int S) {
    int Seg;
    Seg=S+(M*60)+(H*3600);
    return Seg;
}

int main () {
    int h, m, s;
    printf("Digite o total de horas: ");
    scanf("%d", &h);
    printf("Digite o total de minutos: ");
    scanf("%d", &m);
    printf("Digite o total de segundos: ");
    scanf("%d", &s);
    printf("\nO total em segundos e: %d\n", conversor(h,m,s));
    return 0;
}