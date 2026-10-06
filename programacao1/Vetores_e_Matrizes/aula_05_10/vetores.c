
float somar_vetor(float v[], int n);

float media_vetor(float v[], int n);

int contar_pares_vetor(float v[], int n);

int menor_elemento_vetor(float v[], int n);

int pesquisa_vetor(float v[], int n, float valor);

int ultima_ocorrencia_vetor(float v[], int n, float valor);

void inverter_vetor(float v[], int n);

void inverter_direcao_vetor(float v[], int n);

float somar_vetor(float v[], int n){
    float soma =0;
    for(int i =0; i< n;i++){
        soma = soma + v[i];
    }
    return soma;

}

float media_vetor(float v[], int n){
    float soma =0, media;
    for(int i =0; i< n;i++){
        soma = soma + (float)v[i];
    }
    media = (float)soma/n;
    return media;

}

int ultima_ocorrencia_vetor(float v[], int n, float valor){
    for(int i=n-1;i>=0;i--){
        if(v[i]==valor){
            return i;
        }
    }
    return -1;
}

int contar_pares_vetor(float v[], int n){
    int pares=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            
        }
    }

}