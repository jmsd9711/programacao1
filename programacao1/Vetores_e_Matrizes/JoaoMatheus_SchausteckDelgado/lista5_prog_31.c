#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void maior_soma(int a[], int n){
    int soma=0, i, p1,p2;
    for(i=0;i<n;i++){
        if(i+1==20){
            break;
        }
        if((a[i]+a[i+1])>soma){
            soma = a[i]+a[i+1];
            p1=i;
            p2=i+1;
        }
    }
    printf("Maior soma:%d posicoes: %d %d\n",soma,p1,p2);
}

int main(){
    int a[20];
    ler(a,20);
    maior_soma(a, 20);
    return 0;
}
