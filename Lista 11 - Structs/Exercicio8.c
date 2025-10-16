#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma estrutura capaz de armazenar o nome e a data de
nascimento de uma pessoa. Agora, escreva um programa que leia
os dados de seis pessoas. Calcule e exiba os nomes da pessoa
mais nova e da mais velha.*/

    struct pessoa {
        char nome[50];
        int ano;
        int mes;
        int dia;
    };

    typedef struct pessoa pessoa;

int main()
{
    pessoa p[6];
    int A=0, M=0, D=0, i, X;

    for(i=0;i<6;i++) {
        printf("\n---------------PESSOA %d---------------\n", i+1);
        printf("Digite o nome da pessoa %d: ", i+1);
        getchar();
        fgets(p[i].nome,50,stdin);
        p[i].nome[strcspn(p[i].nome,"\n")]='\0';

        printf("Digite a data do nascimento(dd mm aaaa)(APENAS NUMEROS): ");
        scanf("%d %d %d", &p[i].dia, &p[i].mes, &p[i].ano);
    }
     for(i=0;i<6;i++) {
        if (p[i].ano>A||p[i].ano==A&&p[i].mes>M||p[i].ano==A&&p[i].mes==M&&p[i].dia>D) {
            A=p[i].ano;
            M=p[i].mes;
            D=p[i].dia;
            X=i;
        }
     }
    printf("\n\nPessoa mais nova: %s\n", p[X].nome);

    for(i=0;i<6;i++) {
        if (p[i].ano<A||p[i].ano==A&&p[i].mes<M||p[i].ano==A&&p[i].mes==M&&p[i].dia<D) {
            A=p[i].ano;
            M=p[i].mes;
            D=p[i].dia;
            X=i;
        }
     }
     printf("Pessoa mais velha: %s\n", p[X].nome);
    return 0;
}