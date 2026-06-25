#include <stdio.h>

int main(){
    float peso, altura, imc;
    int i, abaixo=0;
    for(i=0;i<20;i++){
        printf("Digite o peso da pessoa e sua altura:\n");
        scanf("%f %f",&peso,&altura);
        imc = peso/(altura*altura);
        if(imc<=18.5){
        abaixo++;    
        }
    }
    printf("%d pessoas abaixo do peso",abaixo);
    return 0;
}
