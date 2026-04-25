#include <stdio.h>

int main(){

    int dia;
    printf("Informe o dia da semana: \n");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("Final de semana!");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia util!");
        break;
    case 7:
    printf("Final de semana!");
    break;

    default:
        printf("Dia invalido");
        break;
    }
    return 0;
}