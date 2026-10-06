#include <stdio.h>

float somar_vetor(float v[], int n);

float media_vetor(float v[], int n);

int contar_pares_vetor(float v[], int n);

int menor_elemento_vetor(float v[], int n);

int pesquisa_vetor(float v[], int n, float valor);

int ultima_ocorrencia_vetor(float v[], int n, float valor);

void inverter_vetor(float v[], int n);

void inverter_direcao_vetor(float v[], int n);

int main(){
    float vf[]= {2.5,3.0,1.5,4.0};

    printf("%2.f \n",somar_vetor(vf, 4));
    printf("%2.f \n",media_vetor(vf, 4.0));
    printf("%2.d \n",ultima_ocorrencia_vetor(vf, 4, 3.0));
    return 0;
}