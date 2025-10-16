#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Usando a estrutura “atleta” do exercício anterior, escreva um
programa que leia os dados de cinco atletas e os exiba por ordem
de idade, do mais velho para o mais novo.*/

    struct atleta {
        char nome[50];
        char esporte[20];
        int idade;
        float altura;
    };

    typedef struct atleta atleta;

int main () {
    atleta a[5], temp;
    int i, j;

    for (i=0;i<5;i++) {
        printf("\n---------------ATLETA %d---------------\n", i+1);
        printf("Nome: ");
        scanf("%49[^\n]s", a[i].nome);
        setbuf(stdin, NULL);

        printf("Esporte: ");
        scanf("%19[^\n]s", a[i].esporte);
        setbuf(stdin, NULL);

        printf("Idade: ");
        scanf("%d", &a[i].idade);
        setbuf(stdin, NULL);

        printf("Altura: ");
        scanf("%f", &a[i].altura);
        setbuf(stdin, NULL);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (a[j].idade < a[j + 1].idade) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    system ("cls");

    printf("-----DADOS DOS ATLETAS (DO MAIS VELHO PARA O MAIS NOVO)-----\n\n");
    for (i=0;i<5;i++) {
        printf("Nome: %s\n", a[i].nome);
        printf("Esporte: %s\n", a[i].esporte);
        printf("Idade: %d\n", a[i].idade);
        printf("Altura: %.2f\n\n", a[i].altura);
    }

    return 0;
}

