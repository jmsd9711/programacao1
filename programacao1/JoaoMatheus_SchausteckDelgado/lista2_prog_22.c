#include <stdio.h>

int main(){

    float peso, altura;
    printf("digite o peso e a altura do atleta: \n");
    scanf("%f %f", &peso, &altura);
    if(peso >= 50 && peso < 60 && altura < 1.70){
        printf("categoria = novato");
    }else if(peso >= 60 && peso <= 80 && altura >= 1.70 && altura < 1.9){
        printf("categoria = profissional");
    }else{
        printf("categoria =Amador");
    }
    return 0;
}