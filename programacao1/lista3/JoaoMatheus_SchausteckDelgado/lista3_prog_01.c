#include <stdio.h>

int main(){

    int v, i=1;
    printf("Digite um valor: \n");
    scanf("%d",&v);
    while(v>=i){
        printf("%d \n",i);
        i++;
    }
    return 0;
}