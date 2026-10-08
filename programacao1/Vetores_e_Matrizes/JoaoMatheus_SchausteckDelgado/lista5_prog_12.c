#include <stdio.h>

void ler(float v[]){
    int i=0;
    do{
        printf("Digite um valor: \n");
        scanf("%f",&v[i]);
        if(v[i]<0){
            break;
        }
        i++;
    }while(i<20);
}
float somar(float v[], int n){
    float soma=0;
    for(int i = 0;i<n;i++){
        if(v[i]>10){
            soma += v[i];
        }
    }
    return soma;
}


int main(){
    float v[20];
    ler(v);
    printf("%.2f \n",somar(v,20));
    return 0;
}

