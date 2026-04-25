#include <stdio.h>

int main(){

    int idade, estudante, vip;
    printf("Informe a idade, se eh estudante(1 = sim, 0 = nao) ou se eh vip(1 = sim, 0 = nao): \n");
    scanf("%d %d %d", &idade, &estudante, &vip);
    if(idade>65 || estudante == 1 || vip == 1){
        printf("Paga meia-entrada");
    }else{
        printf("Paga entrada integral");
    }
    return 0;
}