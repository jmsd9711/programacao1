#include <stdio.h>

void respostas(char v[], int n){
    for(int i =0; i<n;i++){
        printf("Digite as respostas do aluno: \n");
        scanf("%c",&v[i]);
    }
}
void gabarito(char v[], int n){
    for(int i =0; i<n;i++){
        printf("Digite as respostas do gabarito: \n");
        scanf("%c",&v[i]);
    }
}

void acertos(char r[], char g[], int n){
    int qtd_acertos=0, qtd_erros=0;
    for (int i = 0; i <n; i++){
        if(g[i]==r[i]){
            qtd_acertos++;
        }else{
            qtd_erros++;
        }
    }
    printf("%d acertos e %d erros",qtd_acertos,qtd_erros);
}

int main(){
    char r[10];
    char g[10];
    respostas(r,10);
    gabarito(g,10);
    acertos(r,g,10);
    return 0;
}

