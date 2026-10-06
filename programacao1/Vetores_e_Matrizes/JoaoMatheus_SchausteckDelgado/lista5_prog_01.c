#include <stdio.h>

void ler_vetor(int v[], int n){
    for(int i=0;i<n;i++){
        printf("Informe um valor: \n");
        scanf("%d",&v[i]);
    }
}

void pares(int v[], int n){
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            printf("%d \t",v[i]);
        }
    }
}

int main(){

    int v[10];
    ler_vetor(v,10);
    pares(v,10);
    return 0;
}