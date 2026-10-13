#include <stdio.h>

void ler(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void verificar(int a[],int b[]){
    int c[20];
    int indice_c=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if(b[j]==a[i]){
                int apareceu = 0;
                for(int k=indice_c-1;k>=0;k--){
                    if(a[i]==c[k]){
                        apareceu=1;
                        break;
                    }
                }
                if(apareceu==0){
                c[indice_c]=a[i];
                indice_c++;
                }
                break;
            }
        }
    }
    for(int i = 0; i < indice_c; i++){
        printf("%d \t",c[i]);
    }
    
}

int main(){
    int a[10];

    int b[20];

    ler(a,10);
    ler(b,20);
    verificar(a,b);
    return 0;
}

