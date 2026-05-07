#include <stdio.h>

int main(){

    int quantidade;
    float total;
    printf("Digite a quantidade de balas: \n");
    scanf("%d", &quantidade);
    if(quantidade < 0){
        printf("Quantidade invalida");
    }else if(quantidade < 50){
        total = quantidade * 0.30;
        printf("Valor a pagar: %.2f", total);
    }else if(quantidade <= 100){
        total = quantidade * 0.25;
        printf("Valor a pagar: %.2f", total);
    }else if(quantidade <= 200){
        total = quantidade * 0.22;
        printf("Valor a pagar: %.2f", total);
    }else if(quantidade <= 400){
        total = quantidade * 0.17;
        printf("Valor a pagar: %.2f", total);
    }else{
        total = quantidade * 0.15;
        printf("Valor a pagar: %.2f", total);
    }
    return 0;
}