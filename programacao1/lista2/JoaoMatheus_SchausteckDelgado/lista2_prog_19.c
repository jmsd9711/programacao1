#include <stdio.h>

int main(){

    int idade, anos;
    printf("Digite a idade e os anos trabalhados: \n");
    scanf("%d %d", &idade, &anos);
    printf("Idade: %d \n", idade);
    printf("anos trabalhados: %d \n", anos);
    if(idade >= 65|| anos >= 30 ||(idade >= 60 &&anos >=25)){
        printf("requerer aposentadoria");
    }else{
        printf("nao requerer");
    }
    return 0;
}