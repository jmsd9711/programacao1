#include <stdio.h>
float quadrado(float n){
    return n*n;
}
float cubo(float n){
    return n*n*n;
}
int paridade(int n){
    if(n%2==0){
        return printf("par");
    }else{
        return printf("impar");
    }
}
int primo(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
          return 0;  
        }
    }
    return 1;
}
int main(){
    float n;
    int op;
    printf("Informe um valor: \n");
    scanf("%f",&n);
    printf("Escolha uma opcao:\n");
    printf("1 - quadrado \n");
    printf("2 - cubo \n");
    printf("3 - verificar paridade \n");
    printf("4 - verificar se eh primo \n");
    printf("5 - sair \n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("%f",quadrado(n));
        break;
    case 2:
        printf("%f",cubo(n));
        break;
    case 3:
        printf("",paridade(n));
        break;
    case 4:
        if(primo(n)==1){
            printf("Eh primo");
        }else{
            printf("Nao eh primo");
        }
        break;
    case 5:
        printf("Saindo...");
        break;

    return 0;
}}