#include <stdio.h>

int main(){

    int valor, unidade, dezena, centena;
    printf("Digite um valor menos que 1000:");
    scanf("%d",&valor);
    unidade = valor/100;
    dezena = (valor%100)/10;
    centena = valor%10;
    printf("%d + %d + %d=%d",unidade,dezena,centena, unidade+dezena+centena);
    return 0;

}