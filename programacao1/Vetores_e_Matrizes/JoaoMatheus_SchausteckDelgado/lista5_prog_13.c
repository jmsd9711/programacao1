#include <stdio.h>

int ultima_vitoria(int v[],int n){
    int ano;
    printf("Digite o ano atual: \n");
    scanf("%d",&ano);
    return ano-v[n-1];
}

int diferenca_vitoria(int v[],int n){
    for(int i=0;i<n;i++){
        if(i+1==5){
            break;
        }else{
            printf("Do ano: %d, ate %d, se passaram:%d anos \n",v[i],v[i+1], v[i+1]-v[i]);
        }
        
    }
}

int main(){
    int vitorias[5]={1958,1962,1970,1994,2002};
    printf("Fazem %d anos desde a ultima vitoria",ultima_vitoria(vitorias,5));
    diferenca_vitoria(vitorias,5);
    return 0;
}

