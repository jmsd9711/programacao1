#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void consecutivos(int a[],int n){
    int sequencia=1, maior=1, valor=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            sequencia++;
            //printf("Sequencia=%d // maior=%d // valor=%d\n",sequencia,maior,valor);
        }else if(a[i]!=a[i+1]){
            sequencia=1;
        }
        if(sequencia>maior){
            maior=sequencia;
            valor=a[i];
            //printf("Sequencia=%d // maior=%d // valor=%d\n",sequencia,maior,valor);
        }
    }
    printf("Maior valor encontrado: %d, com %d repeticoes no vetor",valor,maior);
}

int main(){
    int a[20];
    ler(a,20);
    consecutivos(a,20);
    return 0;
}
// = {2, 2, 5, 5, 5, 3, 3, 1, 8, 8,8, 8, 4, 6, 6, 7, 7, 7, 9, 9}