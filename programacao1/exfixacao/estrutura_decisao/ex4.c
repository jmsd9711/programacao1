#include <stdio.h>

int main(){
    int produto;

    printf("Digite a quantidade do produto: \n");
    scanf("%d",&produto);
    if(produto<10){
        printf("Estoque baixo! Repor imediatamente.");
    }else{
        printf("Estoque suficiente.");
    }
    return 0;
}