#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura representando uma hora. Essa estrutura deve
conter os campos hora, minuto e segundo. Agora, escreva um programa que
leia um vetor de cinco posições dessa estrutura e imprima a maior hora.*/

    struct HORAS {
        int hora;
        int min;
        int seg;
    };

    typedef struct HORAS HORAS;

int main () {
    HORAS vet[5];
    int i, h=0, m=0, s=0;

    for (i=0;i<5;i++) {
        printf("-----LEITOR DE HORAS-----\n");
        printf("\tHORA NUMERO %d\n", i+1);
        printf("Horas: ");
        scanf("%d", &vet[i].hora);
        printf("Minutos: ");
        scanf("%d", &vet[i].min);
        printf("Segundos: ");
        scanf("%d", &vet[i].seg);

        if (vet[i].hora>h) {
            h=vet[i].hora;
            m=vet[i].min;
            s=vet[i].seg;
        } else if (vet[i].hora==h&&vet[i].min>m) {
            h=vet[i].hora;
            m=vet[i].min;
            s=vet[i].seg;
        } else if (vet[i].hora==h&&vet[i].min==m&&vet[i].seg>s) {
            h=vet[i].hora;
            m=vet[i].min;
            s=vet[i].seg;
        }

        printf("\n\n");
    }

    printf("----------MAIOR HORA INFORMADA----------\n");
    printf("\t\t%d:%d:%d\n", h, m, s);
    printf("----------------------------------------\n\n");
    return 0;
}