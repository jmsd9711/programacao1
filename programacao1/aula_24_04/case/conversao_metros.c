#include <stdio.h>

int main(){

    float m, km, dm, cm, mm;
    int opcao;
    printf("Informe a quantidade de metros: \n");
    scanf("%f",&m);

    printf("\n1 - Converter para Quilometros\n");
    printf("2 - Converter para Centimetros\n");
    printf("3 - Converter para Decimetros\n");
    printf("4 - Converter para milimetros\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        km = m/1000;
        printf("%.2f km",km);
        break;
    case 2:
        cm = m*100;
        printf("%.2f cm",cm);
        break;

    case 3:
        dm = m*10;
        printf("%.2f dm",dm);
        break;

    case 4:
        mm = m*1000;
        printf("%.2f mm",mm);
        break;

    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}