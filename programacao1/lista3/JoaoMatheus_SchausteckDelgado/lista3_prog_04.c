#include <stdio.h>

int main(){

    int i=0, n, valor;
    printf("Digite o valor de N: \n");
    scanf("%d",&n);
    while(i<5){
        printf("Digite um valor:\n");
        scanf("%d",&valor);
        if(valor%n==0){
            printf("%d e divisivel por %d\n",valor,n);
        }else{
            printf("%d nao e divisivel por %d \n",valor,n);
        }
        i++;
    }
    return 0;
}