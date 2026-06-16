#include <stdio.h>

int main(){

    int copias;
    float total;
    printf("digite o total de copias:\n");
    scanf("%d", &copias);
    if(copias <= 100){
        total = copias * 0.25;
    }else{
        total =(100 *0.25)+ ((copias-100)* 0.20);
    }
    printf("total para pagar: %.2f", total);
    return 0;
}