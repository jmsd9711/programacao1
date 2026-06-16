#include <stdio.h>

int main(){

    int valor, i=0, negativo=0;
    while(i<10){
    printf("Digite um valor: ");
    scanf("%d",&valor);
    if(valor<0){
        negativo++;
    }
    i++;    
}
    printf("A quantidade de valores negativo digitados foi de: %d",negativo);
    return 0;
}