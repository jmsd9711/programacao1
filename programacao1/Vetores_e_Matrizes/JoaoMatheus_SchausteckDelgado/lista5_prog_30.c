#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void complementar(int a[],int b[], int n){
    int c[10], indice=0;
    for(int i=0;i<n;i++){
        int igual=0;
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                igual++;
            }
        }
        if (igual==0){
                int repetiu=0;
                for(int k = indice-1; k >= 0; k--){
                    if(a[i] == c[k]){
                    repetiu = 1;
                    break;
                    }
                }
                if(repetiu==0){
                c[indice]=a[i];
                indice++;
                }
            }
}
        for(int l=0;l<indice;l++){
            printf("%d ",c[l]);
        }
}


int main(){
    int a[10];
    int b[10];
    ler(a,10);
    ler(b,10);
    complementar(a,b,10);
    return 0;
}


