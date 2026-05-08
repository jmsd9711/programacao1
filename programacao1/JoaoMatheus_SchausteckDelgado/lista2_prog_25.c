#include <stdio.h>

int main(){

    int opcao;
    float valor, total;
    printf("Digite o valor da venda: \n");
    scanf("%f", &valor);
    printf("escolha a condicao de pagamento: \n");
    printf("1 - a vista ou pix \n");
    printf("2 - a prazo 30 dias \n");
    printf("3 - a prazo 60 dias \n");
    printf("4 - a prazo 90 dias \n");
    printf("5 - com cartao de debito \n");
    printf("6 - com cartao de credito \n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        total = valor * 0.90;
        printf("venda a vista ou pix \n");
        break;
        case 2:
        total = valor * 0.95;
        printf("venda a prazo 30 dias \n");
        break;
        case 3:
        total = valor;
        printf("venda a prazo 60 dias \n");
        break;
        case 4:
        total = valor * 1.05;
        printf("venda a prazo 90 dias \n");
        break;
        case 5:
        total = valor * 0.94;
        printf("venda com cartao de debito \n");
        break;
        case 6:
        total = valor * 1.07;
        printf("venda com cartao de credito \n");
        break;
        default:
        printf("opcao invalida");
        return 0;
    }
    printf("Total da venda: %.2f", total);
    return 0;
}