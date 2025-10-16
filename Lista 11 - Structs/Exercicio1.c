#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Implemente um programa que leia o nome, a idade e o endereço de
uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima
na tela os dados da estrutura lida.*/

    struct ender {
        char rua [50];
        int numero;
        char bairro [50];
    };
    struct pessoa {
        char name [30];
        int idade;
        struct ender end;
    };

    typedef struct ender ender;
    typedef struct pessoa pessoa;

int main()
{
    pessoa pes;
    ender end;

    printf("Qual seu nome?\n");
    fgets(pes.name,30,stdin);
    pes.name[strcspn(pes.name, "\n")] = '\0';
    printf("Quantos anos voce tem?\n");
    scanf("%d", &pes.idade);
    setbuf(stdin,NULL);
    printf("Qual seu endereco?\nRua: ");
    fgets(pes.end.rua,50,stdin);
    pes.end.rua[strcspn(pes.end.rua, "\n")] = '\0';
    printf("Numero: ");
    scanf("%d", &pes.end.numero);
    setbuf(stdin,NULL);
    printf("Bairro: ");
    fgets(pes.end.bairro,50,stdin);
    pes.end.bairro[strcspn(pes.end.bairro, "\n")] = '\0';
    printf("\n\n\n---------------DADOS---------------\n");
    printf("NOME: %s\n", pes.name);
    printf("IDADE: %d\n", pes.idade);
    printf("ENDERECO: Rua %s; \nN%d; Bairro: %s.", pes.end.rua, pes.end.numero, pes.end.bairro);
    printf("\n-----------------------------------\n");

    return 0;
}