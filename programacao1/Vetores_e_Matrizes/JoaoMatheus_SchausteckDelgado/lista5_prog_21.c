#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

int ocorrencia(int v[], int n, int x){
    int alvo=0;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            printf("Alvo encontrado na posicao %d\n",i);
            alvo++;
        }
    }
    return alvo;
}

int main(){
    int v[20];
    int x;
    ler(v,20);
    printf("Digite o alvo: \n");
    scanf("%d",&x);
    printf("\n%d encontrado %d vezes",x,ocorrencia(v,20,x));
    return 0;
}

