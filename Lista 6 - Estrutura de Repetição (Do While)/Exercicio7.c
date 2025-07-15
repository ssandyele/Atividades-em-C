#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Construa um programa que possibilite calcular a área total de uma residência
(sala, cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do
nome, a largura e o comprimento de um determinado cômodo até que o nome do
cômodo seja “FIM”. O programa deve apresentar o valor total acumulado da área
residencial.*/

int main () {
    float larg, comp, tam, total=0;
    char nome[20];
    printf("Cadastre os comodos e seus respectivos tamanhos para o calculo da residencia!\n\n");
    do {
        printf("CASO QUEIRA ENCERRAR O CADASTRAMENTO, ESCREVA \"FIM\" NO CAMPO \"COMODO\".\n");
        printf("Qual o comodo? (Em uma palavra)\n");
        scanf("%s", nome);
        if (strcmp(nome, "FIM") != 0) {
            printf("Qual a largura (em metros) do comodo?\n");
            scanf("%f", &larg);
            printf("Qual o comprimento (em metros) do comodo?\n");
            scanf("%f", &comp);
            tam = larg * comp;
            total += tam;
            }
    } while (strcmp(nome, "FIM") != 0);
    printf("\nTAMANHO TOTAL DA RESIDENCIA: %.2f metros quadrados\n", total);
    return 0;
}