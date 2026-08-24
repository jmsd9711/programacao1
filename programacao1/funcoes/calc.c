#include <stdio.h>
float soma(float n1, float n2){
    return n1+n2;
}

float mult(float n1, float n2){
    return n1*n2;
}

float sub(float n1, float n2){
    return n1-n2;
}

float div(float n1, float n2){
    return n1/n2;
}

int main(){
    float n1, n2;
    int opcao;
    printf("Digite dois valores: \n");
    scanf("%f %f",&n1,&n2);
    printf("Escolha uma Opcao: \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - multiplicacao \n");
    printf("4 - divisao \n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("O resultado da soma eh de: %.2f", soma(n1,n2));
        break;
    case 2:
        printf("O resultado da subtracao eh de: %.2f", sub(n1,n2));
        break;
    case 3:
        printf("O resultado da multiplicacao eh de: %.2f", mult(n1,n2));
        break;
    case 4:
        printf("O resultado da divisao eh de: %.2f", div(n1,n2));
        break;

    }

    return 0;
}