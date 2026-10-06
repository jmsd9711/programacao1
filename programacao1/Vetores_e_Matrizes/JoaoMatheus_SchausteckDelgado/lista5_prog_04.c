#include <stdio.h>

void ler_vetor(int v[], int n){
    for(int i=0;i<n;i++){
        printf("Informe um valor: \n");
        scanf("%d",&v[i]);
    }
}

int negativo(int v[], int n){
    int negativos=0;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            negativos++;
            printf("Valor negativo na posicao: %d\n",i);
        }
    }
    return negativos;
}

int main(){

    int v[10];
    ler_vetor(v,10);
    int negativos = negativo(v,10);
    printf("Foram encontrados %d numeros negativos",negativos);
    return 0;
}