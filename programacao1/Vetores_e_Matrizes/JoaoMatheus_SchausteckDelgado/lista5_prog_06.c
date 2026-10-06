#include <stdio.h>

void ler_vetor(int v[], int n){
    for(int i=0;i<n;i++){
        printf("Informe um valor: \n");
        scanf("%d",&v[i]);
    }
}

void indice_par(int v[], int n){
    printf("Indice Par:\n");
    for(int i=0;i<n;i+=2){
        printf("%d \t",v[i]);
    }
}

void indice_impar(int v[], int n){
    printf("\nIndice Impar:\n");
    for(int i=1;i<n;i+=2){
        printf("%d \t",v[i]);
    }
}

int main(){

    int v[10];
    ler_vetor(v,10);
    indice_par(v,10);
    indice_impar(v,10);
    
    return 0;
}