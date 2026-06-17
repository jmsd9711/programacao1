#include <stdio.h>

int main(){
    float numero,f=1,i;
    printf("Digite um valor para calcular o fatorial: \n");
    scanf("%f",&numero);
    for(i=numero;i>0;i--){
        if(numero==0){
        printf("O fatorial de %.0f eh: 1",numero);
            break;
    }
        f = f*i;
    }
    printf("O fatorial de %.0f eh: %.2f",numero,f);
    return 0;
}