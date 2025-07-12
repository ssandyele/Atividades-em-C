#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o
total de minutos se passaram desde o início do dia (0:00h).*/

int main () {
    int hora, minutos, total;
    printf("Digite a hora: ");
    scanf("%d\:%d", &hora, &minutos);
    total=60*hora+minutos;
    printf("O total de minutos e: %d", total);
    return 0;
}
