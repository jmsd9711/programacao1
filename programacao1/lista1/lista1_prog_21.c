#include <stdio.h>

int main(){

    float precofinal, custoproducao, taxaimpostos, taxalucro, transporte;

    printf("Digite o preco de custo para a producao: \n");
    scanf("%f",&custoproducao);
    printf("Digite a taxa dos impostos: \n");
    scanf("%f",&taxaimpostos);
    printf("Digite o preco de transporte: \n");
    scanf("%f",&transporte);
    printf("Digite a taxa de lucro: \n");
    scanf("%f",&taxalucro);

    precofinal = custoproducao + (custoproducao * taxaimpostos) + custoproducao * taxalucro + transporte;

    printf("o preco final do produto deve ser de: %f", precofinal);
    return 0;
}