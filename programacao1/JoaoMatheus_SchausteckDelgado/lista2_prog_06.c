#include <stdio.h>

int main(){

    int opcao;
    float media, n1, n2 ,n3;
    float p1,p2,p3;
    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("escolha uma opcao: \n");
    printf("1 - media simples \n");
    printf("2 - media ponderada \n");
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
        media = (n1 + n2 + n3)/3.0;
        printf("Media: %f", media);
        break;
        case 2:
        printf("Digite os pesos: \n");
        scanf("%f %f %f", &p1, &p2, &p3);
        media = (n1*p1+n2*p3+n3*p3)/3.0;
        printf("Media: %f", media);
        break;
    }
}