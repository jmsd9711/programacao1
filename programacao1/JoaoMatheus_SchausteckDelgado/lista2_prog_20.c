#include <stdio.h>

int main(){

    int nota;
    printf("Digite a nota do aluno (0 a 100): \n");
    scanf("%d", &nota);
    if(nota >= 0 && nota <= 60){
        printf("Conceito: D");
    }else if(nota <= 80){
        printf("Conceito: C");
    }else if(nota <= 90){
        printf("Conceito: B");
    }else if(nota <= 100){
        printf("Conceito: A");
    }else{
        printf("Nota invalida");
    }
    return 0;
}