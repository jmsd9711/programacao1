#include <stdio.h>

int main(){

    int m, n;
    printf("Digite o valor de M:\n");
    scanf("%d",&m);
    printf("Digite o valor de N:\n");
    scanf("%d",&n);
    if(m<n){
        printf("o valor de M deve ser maior que N");
    }
    while(m>n){
        printf("%d \n",m);
        m--;
    }
    return 0;
}