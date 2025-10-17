#include <stdio.h>
#include <stdlib.h>

/*Faça uma Procedimento em algoritmo que receba o total de segundos e
converta o valor em horas, minutos e segundos. O procedimento deve
imprimir os valores.*/

int H, M;

void conversor(int S) {
    M=S/60;
    S=S%60;
    H=M/60;
    M=M%60;
    printf("\nHORAS:%d\nMINUTOS:%d\nSEGUNDOS:%d\n", H, M, S);
}

int main() {
    int s;
    printf("Informe uma quantidade x de segundos: ");
    scanf("%d", &s);
    conversor(s);
    return 0;
}