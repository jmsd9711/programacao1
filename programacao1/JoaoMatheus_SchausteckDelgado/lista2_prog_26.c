#include <stdio.h>

int main(){

    float saldo, debitos, creditos, saldof;
    printf("Digite o saldo inicial, o total de debitos e o total de creditos: \n");
    scanf("%f %f %f", &saldo, &debitos, &creditos);
    saldof = saldo - debitos + creditos;
    if(saldof > 0){
        printf("Saldo positivo em R$%.2f", saldof);
    }else if(saldof < 0){
        printf("Saldo negativo em R$%.2f", saldof);
    }else{
        printf("Saldo zero");
    }
    return 0;
}