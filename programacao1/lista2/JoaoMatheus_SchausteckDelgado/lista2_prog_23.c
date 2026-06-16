#include <stdio.h>

int main(){

    int quantidade;
    float total;
    printf("digite a quantidade de balas: \n");
    scanf("%d", &quantidade);
    if(quantidade <= 0){
        printf("quantidade invalida");
    }else if(quantidade < 50){
        total = quantidade * 0.30;
        printf("valor para pagar: %.2f", total);
    }else if(quantidade <= 100){
        total = quantidade * 0.25;
        printf("valor para pagar: %.2f", total);
    }else if(quantidade <= 200){
        total = quantidade * 0.22;
        printf("valor para pagar: %.2f", total);
    }else if(quantidade <= 400){
        total = quantidade * 0.17;
        printf("valor para pagar: %.2f", total);
    }else{
        total = quantidade * 0.15;
        printf("valor para pagar: %.2f", total);
    }
    return 0;
}