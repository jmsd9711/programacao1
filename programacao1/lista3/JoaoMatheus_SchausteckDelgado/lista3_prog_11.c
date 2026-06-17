#include <stdio.h>

int main(){
    int i,n,soma=0;
    printf("Digite um valor:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        if(i%2==0){
            soma = soma + i;
        }
        
    }
    printf("A soma dos valores positivos entre 0 e %d eh:%d\n",n,soma);
    return 0;
}