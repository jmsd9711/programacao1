#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void maior(int a[], int n){
    int b[15], indice=0;
    for(int i=0;i<n;i++){
            int rep=0;
            for(int j =indice-1;j>=0;j--){
                if(b[j]==a[i]){
                    rep=1;
                    break;
                }
            }
            if(rep==0){
                b[indice]=a[i];
                indice++;
            }
    }
    int maior=b[0];
    for(int i = 1;i<indice;i++){
        if(maior<b[i]){
            maior=b[i];
        }
    }
    printf("O maior valor distinto eh:%d e o novo vetor possui: %d elementos",maior,indice);
}

int main(){
    int a[15];
    ler(a,15);
    maior(a, 15);

    return 0;
}

