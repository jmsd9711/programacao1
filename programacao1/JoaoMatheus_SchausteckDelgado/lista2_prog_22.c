#include <stdio.h>

int main(){

    float peso, altura;
    printf("Digite o peso e a altura do atleta: \n");
    scanf("%f %f", &peso, &altura);
    if(peso >= 50 && peso < 60 && altura < 1.70){
        printf("Categoria: Novato");
    }else if(peso >= 60 && peso <= 80 && altura >= 1.70 && altura < 1.9){
        printf("Categoria: Profissional");
    }else{
        printf("Categoria: Amador");
    }
    return 0;
}