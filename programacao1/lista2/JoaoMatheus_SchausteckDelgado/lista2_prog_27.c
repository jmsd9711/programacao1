#include <stdio.h>

int main(){

    int dia, idade;
    float preco, total;
    printf("Digite o dia da semana \n");
    printf("1 - Domingo\n");
    printf("2 - segunda\n");
    printf("3 - terca\n");
    printf("4 - quarta\n");
    printf("5 - quinta\n");
    printf("6 - sexta\n");
    printf("7 - sabado\n");
    scanf("%d", &dia);
    printf("Digite a idade do espectador: \n");
    scanf("%d", &idade);
    printf("digite o preco base do ingresso: \n");
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