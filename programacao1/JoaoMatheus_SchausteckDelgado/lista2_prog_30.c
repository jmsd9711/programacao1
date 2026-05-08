#include <stdio.h>
#include <math.h>

int main(){

    int codigo, aulas, faltas;
    float nota, frequencia;
    printf("Digite o codigo da disciplina: \n");
    scanf("%d", &codigo);
    printf("Digite a nota final: \n");
    scanf("%f", &nota);
    printf("Digite a quantidade de aulas ministradas e as faltas: \n");
    scanf("%d %d", &aulas, &faltas);

    if(nota<0||nota>10||(nota * 0.5)- floor(nota *0.5)>0){
        printf("nota invalida");
        return 0;
    }
    frequencia = (float)(aulas - faltas)/aulas;
    if(frequencia < 0.75){
        printf("reprovado por falta");
        return 0;
    }
    if(nota >= 5){
        printf("aprovado");
    }else if(nota >= 4){
        printf("segunda epoca");
    }else{
        printf("reprovado");
    }
    return 0;
}