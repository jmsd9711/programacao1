#include <stdio.h>

int main(){

    float n1,n2,n3, media;
    printf("Digite a nota em Portugues: \n ");
    scanf("%f", &n1);
    printf("Digite a nota em Matematica: \n ");
    scanf("%f", &n2);
    printf("Digite a nota em Conhecimentos gerais: \n ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;
    printf("Media do candidato: %2.f \n", media);
    if(media>=7){
        printf("Aprovado \n");
    }else{
        printf("Reprovado");
    }
    
    if(n1 > 5 && n2 > 5 && n3 > 5){
        printf("Nao apresentou nenhuma nota abaixo de 5");
    }
    return 0;
}