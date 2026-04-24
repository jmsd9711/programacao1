#include <stdio.h>

int main(){

    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    if(idade>=16){
        printf("Idade suficiente para votar!");
    }else{
        printf("Idade insuficiente para votar!");
    }
    return 0;
}