#include <stdio.h>

int main(){

    int dia;
    printf("Informe o dia(1 a 7): \n");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
    case 7:
        printf("Final de semana!");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia util!");
        break;
    default:
        printf("Dia invalido");
        break;
    }
    return 0;
}