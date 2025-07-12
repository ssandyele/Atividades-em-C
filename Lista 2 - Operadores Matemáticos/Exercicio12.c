#include <stdio.h>
#include <stdlib.h>

/*Em meados dos anos 2000 houve racionamento de energia e antes disto, quase
ninguém falava em quilowatts; mas, agora, todos incorporaram essa palavra em seu
vocabulário. Sabendo-se que 100 quilowatts de energia custa um sétimo do salário-
mínimo, fazer um Algoritmo que receba o valor do salário-mínimo e a quantidade de
quilowatts gasta por uma residência e calcule (imprima).
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%.*/

int main () {
    float salario, quant;
    printf("Digite o valor do salario minimo:\nR$");
    scanf("%f", &salario);
    printf("Qual a quantidade de quilowatts gasta pela residencia?\n");
    scanf("%f", &quant);
    float quilow = salario/7/100;
    printf("O valor de cada kW e: R$%.2f\n",quilow);
    float valor = quilow*quant;
    printf("O valor a ser pago e de: R$%.2f\n", valor);
    float novo = valor - valor*10/100;
    printf("O novo valor com desconto e: R$ %.2f\n", novo);
    return 0;
}
