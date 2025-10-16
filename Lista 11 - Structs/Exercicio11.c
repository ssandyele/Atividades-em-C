#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva um programa que contenha uma estrutura representando
uma data válida. Essa estrutura deve conter os campos dia, mês e
ano. Em seguida, leia duas datas e armazene nessa estrutura.
Calcule e exiba o número de dias que decorreram entre as duas
datas.*/

//Considerando anos com 365 dias e meses com 30 dias.

    struct data {
        int dia;
        int mes;
        int ano;
    };

    typedef struct data data;

int main () {
    data A, B;
    int totA, totB, DIAS;

    printf("Digite a primeira data: (dd mm aaaa) ");
    scanf("%d %d %d", &A.dia, &A.mes, &A.ano);
    printf("Digite a segunda data: (dd mm aaaa) ");
    scanf("%d %d %d", &B.dia, &B.mes, &B.ano);

    totA= (A.dia) + (A.mes*30) + (A.ano*365);
    totB= (B.dia) + (B.mes*30) + (B.ano*365);

    DIAS=totA-totB;
    if(DIAS<0) {DIAS=DIAS*(-1);}

    printf("\nDias que decorreram entre as duas datas: %d\n", DIAS);
    return 0;
}