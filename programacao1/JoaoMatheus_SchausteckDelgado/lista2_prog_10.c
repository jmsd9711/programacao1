#include <stdio.h>

int main(){

    int opcao;
    printf("Digite a cor do sinal: \n");
    printf("1 - verde\n");
    printf("2 - amarelo\n");
    printf("3 - vermelho\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("siga");
        break;
        case 2:
        printf("atencao");
        break;
        case 3:
        printf("pare");
        break;
    }
    return 0;
}