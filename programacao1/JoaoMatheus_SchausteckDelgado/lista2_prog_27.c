#include <stdio.h>

int main(){

    int dia, idade;
    float preco, total;
    printf("Digite o dia da semana (1-domingo, 2-segunda... 7-sabado): \n");
    scanf("%d", &dia);
    printf("Digite a idade do espectador: \n");
    scanf("%d", &idade);
    printf("Digite o preco-base do ingresso: \n");
    scanf("%f", &preco);
    total = preco;
    if(dia == 3){
        total = total * 0.5;
    }
    if(idade < 14){
        total = total * 0.5;
    }
    printf("Valor a pagar: %.2f", total);
    return 0;
}