#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto. Faça um
programa em que o usuário entre com o valor e o estado de destino do
produto e o programa retorne o preço final do produto acrescido do imposto
do estado em que ele será vendido. Se o estado digitado não for válido,
mostrará uma mensagem de erro.
| Estado  | MG | SP  | RJ  | MS |
| ------- | -- | --- | --- | -- |
| Imposto | 7% | 12% | 15% | 8% |
*/

int main () {
    float valor, imp;
    int est;
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);
    printf("\nEscolha o estado:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
    scanf("%d", &est);
    switch (est) {
    case 1:
        imp = valor+valor*0.07;
        printf("Preco final com imposto e: R$%.2f\n", imp);
        break;
    case 2:
        imp = valor+valor*0.12;
        printf("Preco final com imposto e: R$%.2f\n", imp);
        break;
    case 3:
        imp = valor+valor*0.15;
        printf("Preco final com imposto e: R$%.2f\n", imp);
        break;
    case 4:
        imp = valor+valor*0.08;
        printf("Preco final com imposto e: R$%.2f\n", imp);
        break;
    default:
        printf("Erro: estado invalido.\n");
        break;
    }
    return 0;
}