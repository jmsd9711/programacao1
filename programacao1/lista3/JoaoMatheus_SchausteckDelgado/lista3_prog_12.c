#include <stdio.h>

int main(){
    int v,i,p=0,n=0;
    for(i=0;i<20;i++){
    printf("Digite um valor:\n");
    scanf("%d",&v);
    if(v>=0){
        p++;
    }else{
        n++;
    }
    }
    printf("A quantidade de valores positivos eh de: %d,\ne a quantidade de valores negativos eh de: %d",p,n);
    return 0;
}