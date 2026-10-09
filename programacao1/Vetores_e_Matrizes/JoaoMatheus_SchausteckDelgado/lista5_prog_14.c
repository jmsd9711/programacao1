#include <stdio.h>

void ler(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite um elemento do vetor: \n");
        scanf("%d", &v[i]);
    }
}

void print(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", v[i]);
    }
}

void sem_rep(int v[], int n){
    int sp[10], indice = 0;

    for(int i = 0; i < n; i++){
        int apareceu = 0;
        for(int j = 0; j < i; j++){
            if(v[i] == v[j]){
                apareceu = 1;
                break;
            }
        }
        if(apareceu!=1){
            sp[indice] = v[i];
            indice++;
        }
    }
    print(sp, indice);
}

int main(){
    int v[10];
    ler(v, 10);
    sem_rep(v, 10);
    return 0;
}