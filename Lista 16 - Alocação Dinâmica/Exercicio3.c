#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e
retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite
também que o usuário digite os dados desse vetor dentro da função.*/

    struct Cadastro {
        char nome [50];
        int idade;
        char ender [100];
    };

    typedef struct Cadastro Cadastro;

Cadastro* criaCadastro(int n) {
    Cadastro *p;
    p = (Cadastro *) malloc (n*sizeof(Cadastro));

    if (p == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    for (int i=0;i<n;i++) {
        printf("\n\nCADASTRO DA PESSOA NUMERO %d\n", i+1);
        printf("Nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &p[i].idade);

        getchar();

        printf("Endereco: ");
        fgets(p[i].ender, sizeof(p[i].ender), stdin);
        p[i].ender[strcspn(p[i].ender, "\n")] = '\0';
    }
    return p;
}

int main() {
    int n;
    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &n);
    getchar();

    Cadastro *vet = criaCadastro(n);

    printf("\n--- Dados cadastrados ---\n");
    for (int i = 0; i < n; i++) {
        printf("\n------- PESSOA  N%d -------\n", i + 1);
        printf("Nome: %s\n", vet[i].nome);
        printf("Idade: %d\n", vet[i].idade);
        printf("Endereço: %s\n", vet[i].ender);
    }
    free(vet);
    return 0;
}