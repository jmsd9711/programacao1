#include <stdio.h>

int main(){

    int ano;
    printf("Informe o ano: \n");
    scanf("%d", &ano);
    if(ano%4==0&&(ano %100!=0 || ano %400==0)){
        printf("Ano bissexto");
    }else{
        printf("Ano normal");
    }
    return 0;
}