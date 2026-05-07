#include <stdio.h>

int main(){

    int diarias;
    float taxa, total;
    printf("Digite o numero de diarias: \n");
    scanf("%d", &diarias);
    if(diarias > 5){
        taxa = 5.50;
    }else if(diarias == 5){
        taxa = 6.00;
    }else{
        taxa = 8.00;
    }
    total = diarias * (60.00 + taxa);
    printf("Numero de diarias: %d \n", diarias);
    printf("Valor total da conta: %.2f", total);
    return 0;
}