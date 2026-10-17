#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void intersecao(int a[], int b[]){
    int c[10], ci=0;
    for(int i = 0;i<10;i++){
       for(int j=0;j<10;j++){
        if(a[i]==b[j]){    
        int apareceu = 0;
            for(int k=ci-1;k>=0;k--){
                if(c[k]==a[i]){
                    apareceu=1;
                    break;
                }
            }
           if(apareceu==0){
            c[ci]=a[i];
            ci++;
        } 
        }
    }
}
for(int i = 0; i < ci; i++){
        printf("%d \t",c[i]);
    }
}

int main(){
    int a[10];
    int b[10];
    ler(a,10);
    ler(b,10);

    intersecao(a,b);
    return 0;
}

