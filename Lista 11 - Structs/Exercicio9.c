#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma estrutura representando um atleta. Essa estrutura deve
conter o nome do atleta, seu esporte, idade e altura. Agora, escreva
um programa que leia os dados de cinco atletas. Calcule e exiba os
nomes do atleta mais alto e do mais velho.*/


    struct atleta {
        char nome[50];
        char esporte[20];
        int idade;
        float altura;
    };

    typedef struct atleta atleta;

int main () {
    atleta a[5];
    float M=0.00;
    int V=0, X, Y, i;

    for (i=0;i<5;i++) {
        printf("\n---------------ATLETA %d---------------\n", i+1);
        printf("Nome: ");
        getchar();
        fgets(a[i].nome, 50, stdin);
        a[i].nome[strcspn(a[i].nome, "\n")]='\0';

        printf("Esporte: ");
        getchar();
        fgets(a[i].esporte, 20, stdin);
        a[i].esporte[strcspn(a[i].esporte, "\n")]='\0';

        printf("Idade: ");
        scanf("%d", &a[i].idade);

        printf("Altura: ");
        scanf("%f", &a[i].altura);

        if(a[i].idade>V) {
            V=a[i].idade;
            X=i;
        }
        if (a[i].altura>M) {
            M=a[i].altura;
            Y=i;
        }
    }

    printf("\n\nAtleta mais velho: %s\n", a[X].nome);
    printf("Atleta mais alto: %s\n\n", a[Y].nome);

    return 0;
}