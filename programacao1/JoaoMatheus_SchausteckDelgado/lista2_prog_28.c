#include <stdio.h>

int main(){

    float saldo, credito;
    printf("digite o saldo medio do clinte: \n");
    scanf("%f", &saldo);
    if(saldo <= 200){
        credito = 0;
        printf("saldo medio: %.2f \n", saldo);
        printf("Nenhum credito disponivel");
    }else if(saldo <= 1000)
    {
        credito = saldo * 0.20;
        printf("saldo medio: %.2f \n", saldo);
        printf("valor do credito: %.2f", credito);
    }else if(saldo <= 2000){
        credito = saldo * 0.30;
        printf("saldo medio: %.2f \n", saldo);
        printf("valor do credito: %.2f", credito);
    }else
    {
        credito = saldo * 0.40;
        printf("saldo medio: %.2f \n", saldo);
        printf("valor do credito: %.2f", credito);}
    return 0;
}