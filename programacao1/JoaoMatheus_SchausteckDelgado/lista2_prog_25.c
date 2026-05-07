#include <stdio.h>

int main(){

    int opcao;
    float valor, total;
    printf("Digite o valor da venda: \n");
    scanf("%f", &valor);
    printf("Escolha a condicao de pagamento: \n");
    printf("1 - Venda a Vista ou Pix \n");
    printf("2 - Venda a Prazo 30 dias \n");
    printf("3 - Venda a Prazo 60 dias \n");
    printf("4 - Venda a Prazo 90 dias \n");
    printf("5 - Venda com cartao de debito \n");
    printf("6 - Venda com cartao de credito \n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        total = valor * 0.90;
        printf("Venda a Vista ou Pix \n");
        break;
        case 2:
        total = valor * 0.95;
        printf("Venda a Prazo 30 dias \n");
        break;
        case 3:
        total = valor;
        printf("Venda a Prazo 60 dias \n");
        break;
        case 4:
        total = valor * 1.05;
        printf("Venda a Prazo 90 dias \n");
        break;
        case 5:
        total = valor * 0.94;
        printf("Venda com cartao de debito \n");
        break;
        case 6:
        total = valor * 1.07;
        printf("Venda com cartao de credito \n");
        break;
        default:
        printf("Opcao invalida");
        return 0;
    }
    printf("Total da venda: %.2f", total);
    return 0;
}