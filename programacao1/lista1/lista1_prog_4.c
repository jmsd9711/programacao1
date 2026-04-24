#include <stdio.h>

int main(){

    int comprimento, largura, altura, volume;

    printf("Digite o comprimento: ");
    scanf("%d",&comprimento);
    printf("Digite o largura: ");
    scanf("%d",&largura);
    printf("Digite o altura: ");
    scanf("%d",&altura);
    volume =comprimento*largura*altura;
    printf("O volume e: %d",volume);

    return 0;
}