#include <stdio.h>
#include <stdlib.h>

/*Faça um procedimento que receba um número inteiro de 1 a 12 e imprima
em tela o mês e a sua quantidade de dias de acordo com o número digitado
pelo usuário. Exemplo: Entrada = 4. Saída = abril.*/

void mes (int i);

int main () {
    int n;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &n);
    printf("\n");
    mes(n);
}

void mes (int i) {
    switch (i) {
    case 1:
        printf("Janeiro\n31 dias.\n");
        break;
    case 2:
        printf("Fevereiro\n28 dias.\n");
        break;
    case 3:
        printf("Marco\n31 dias.\n");
        break;
    case 4:
        printf("Abril\n30 dias.\n");
        break;
    case 5:
        printf("Maio\n31 dias.\n");
        break;
    case 6:
        printf("Junho\n30 dias.\n");
        break;
    case 7:
        printf("Julho\n31 dias.\n");
        break;
    case 8:
        printf("Agosto\n31 dias.\n");
        break;
    case 9:
        printf("Setembro\n30 dias.\n");
        break;
    case 10:
        printf("Outubro\n31 dias.\n");
        break;
    case 11:
        printf("Novembro\n30 dias.\n");
        break;
    case 12:
        printf("Dezembro\n31 dias.\n");
        break;
    default:
        printf("Numero invalido!\n");
    }
}