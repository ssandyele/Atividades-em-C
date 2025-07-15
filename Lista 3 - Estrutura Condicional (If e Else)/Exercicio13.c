#include <stdio.h>
#include <stdlib.h>

/*A prefeitura de Contagem abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Fazer um Algoritmo que permita entrar com o salário bruto e o valor da
prestação, e informar se o empréstimo pode ou não ser concedido.*/

int main () {
    float sal, prest, porc;
    printf("Digite o valor do salario bruto:\n");
    scanf("%f", &sal);
    printf("Digite o valor da prestacao:\n");
    scanf("%f", &prest);
    porc=sal*0.3;
    if (prest>porc){
        printf("O valor ultrapassa o maximo estabelecido.\nNao sera possivel conceder o emprestimo\n");
    }
    else {
        printf("O valor esta de acordo com o estabelecido.\nSera possivel conceder o emprestimo\n");
    }
    return 0;
}
