#include <stdio.h>

int main(){

    int dia;
    printf("Informe do dia(1 ao 7): \n");
    scanf("%d",&dia);

    if(dia == 1 || dia == 7){
        printf("Final de semana");
    }else if(dia>1 && dia<=6){
        printf("Dia util");
    }else{
        printf("Dia invalido");
    }
    return 0;
}