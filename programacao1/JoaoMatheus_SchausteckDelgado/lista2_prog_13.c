#include <stdio.h>

int main(){

    int total, defeituosas, manutencao;
    printf("digite o total de pecas produzidas e o total de defeituosas: \n");
    scanf("%d %d", &total, &defeituosas);
    manutencao = total * 0.1;
    if(defeituosas > manutencao){
        printf("maquina precisa de manutencao");
    }else{
        printf("maquina nao precisa de manutencao");
    }
    return 0;
}