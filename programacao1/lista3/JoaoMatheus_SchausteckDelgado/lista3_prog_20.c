#include <stdio.h>

int main() {
    int valor,primo,i;
    printf("Digite um valor para verificar se eh primo ou nao:\n");
    scanf("%d",&valor);
    for(i=1;i<=valor;i++){
        if(valor%i==0){
        primo++;    
        }
    }
    if(primo==2){
        printf("O numero eh primo");
    }else{
        printf("O numero nao eh primo");
    }
    return 0;
}