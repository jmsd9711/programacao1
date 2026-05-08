#include <stdio.h>

int main(){

    int idade;
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    if(idade < 16){
        printf("Nao eleitor");
    }else if(idade >= 18 && idade <= 65){
        printf("Eleitor obrigatorio");
    }else if((idade >= 16 && idade < 18) || idade > 65){
        printf("Eleitor facultativo");
    }
    return 0;
}