#include <stdio.h>

int ultimo_par(int n[], int total){
    int par=-1;
    for(int i=0;i<total;i++){
        if(n[i]%2==0){
            par=i;
        }
    }
    return par;
}

int main(){

    int n[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21};
    int par = ultimo_par(n,20);
    if(par!=-1){
        printf("O indice do ultimo numero par eh: %d",par);
    }else{
        printf("O vetor nao possui um valor par");
    }
    return 0;
}
