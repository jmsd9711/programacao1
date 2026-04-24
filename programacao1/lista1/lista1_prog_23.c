#include <stdio.h>

int main(){

    float nota1,nota2,nota3, notafinal;

    printf("Digite a nota tirada na prova com peso 2: \n");
    scanf("%f",&nota1);
    printf("Digite a nota tirada na prova com peso 4: \n");
    scanf("%f",&nota2);
    printf("Digite a nota tirada na prova com peso 6: \n");
    scanf("%f",&nota3);

    notafinal = ((nota1*0.2) + (nota2*0,4)+(nota3*0,6));

    printf("A media final do aluno e de: %f",notafinal);
    return 0;
}