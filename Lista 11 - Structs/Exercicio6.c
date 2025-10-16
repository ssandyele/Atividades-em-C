#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas de
três provas. Agora, escreva um programa que leia os dados de cinco alunos e
os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno
que possui a maior média geral dentre os cinco.*/


    struct Aluno {
        int matricula;
        char nome[50];
        float n1;
        float n2;
        float n3;
        float media;
    };

    typedef struct Aluno Aluno;

int main () {
    Aluno vet[5];
    int i, M;
    float MEDIA = 0.0;

    for (i=0;i<5;i++) {
        printf("----------ALUNO %d----------\n", i+1);
        printf("Digite o nome do aluno: ");
        getchar();
        fgets(vet[i].nome,50,stdin);
        vet[i].nome[strcspn(vet[i].nome, "\n")] = '\0';

        printf("Qual o numero da matricula do aluno? ");
        scanf("%d", &vet[i].matricula);

        printf("Nota da primeira prova: ");
        scanf("%f", &vet[i].n1);
        printf("Nota da segunda prova: ");
        scanf("%f", &vet[i].n2);
        printf("Nota da terceira prova: ");
        scanf("%f", &vet[i].n3);

        vet[i].media= (vet[i].n1+vet[i].n2+vet[i].n3)/3;
        if (vet[i].media>MEDIA) {
            MEDIA = vet[i].media;
            M=i;
        }
        printf("\n\n");
    }

    printf("\n\n----------ALUNO COM MAIOR MEDIA----------\n");
    printf("\tNome: %s\n", vet[M].nome);
    printf("\tMatricula: %d\n", vet[M].matricula);
    printf("\tNotas das provas: \n\t%.2f\t%.2f\t%.2f\n",vet[M].n1,vet[M].n2,vet[M].n3);
    printf("\tMEDIA FINAL: %.2f", vet[M].media);
    printf("\n-----------------------------------------\n\n");

    return 0;
}