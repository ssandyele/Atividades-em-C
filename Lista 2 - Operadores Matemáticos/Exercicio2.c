#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que efetue o cálculo do salário líquido de um professor. Os dados
fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de
desconto do INSS.*/

int main () {
    float valor, aula, inss, bruto, liquido;
    printf("Qual o valor da aula? R$");
    scanf("%f", &valor);
    printf("Qual foi o numero de aulas dadas no mes? ");
    scanf("%f", &aula);
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &inss);

    bruto=valor*aula;
    printf("O salario bruto e: %.2f\n",bruto);
    liquido=bruto-(bruto*inss/100);
    printf("O salario liquido e: %.2f\n",liquido);
    return 0;
}
