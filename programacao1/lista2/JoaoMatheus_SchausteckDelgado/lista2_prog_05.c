#include <stdio.h>

int main(){

    float altura, idade;
    printf("Digite a altura e a idade: \n");
    scanf("%f %f",&altura,&idade);

    if(altura > 1.9 && idade>18){
        printf("Fora da categoria A");
    }else{
        printf("Dentro da categoria A");
    }
    return 0;
}