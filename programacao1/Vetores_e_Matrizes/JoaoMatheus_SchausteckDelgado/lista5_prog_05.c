#include <stdio.h>

void ler_vetor(int v[], int n){
    for(int i=0;i<n;i++){
        printf("Informe um valor: \n");
        scanf("%d",&v[i]);
    }
}

void substituir_zero(int v[], int n){
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v[i]=1;
        }
    }
}

void mostrar(int v[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t",v[i]);
    }
}

int main(){

    int v[10];
    ler_vetor(v,10);
    substituir_zero(v,10);
    mostrar(v,10);
    return 0;
}