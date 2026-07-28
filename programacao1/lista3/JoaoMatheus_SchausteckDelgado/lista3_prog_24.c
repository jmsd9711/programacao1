#include <stdio.h>

int main(){
    int n,i,perfeito=0;
    printf("Digite um numero: \n");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0){
            perfeito = perfeito+i;
        }
    }
    if(perfeito==n){
        printf("O numero informado eh perfeito: %d",n);
    }else{
        printf("O numero nao eh perfeito: %d",n);
    }
    return 0;
}
