#include <stdio.h>

int main(){

    float saldo, credito;
    printf("Digite o saldo medio do cliente: \n");
    scanf("%f", &saldo);
    if(saldo <= 200){
        credito = 0;
        printf("Saldo medio: %.2f \n", saldo);
        printf("Nenhum credito disponivel");
    }else if(saldo <= 1000){
        credito = saldo * 0.20;
        printf("Saldo medio: %.2f \n", saldo);
        printf("Valor do credito: %.2f", credito);
    }else if(saldo <= 2000){
        credito = saldo * 0.30;
        printf("Saldo medio: %.2f \n", saldo);
        printf("Valor do credito: %.2f", credito);
    }else{
        credito = saldo * 0.40;
        printf("Saldo medio: %.2f \n", saldo);
        printf("Valor do credito: %.2f", credito);
    }
    return 0;
}