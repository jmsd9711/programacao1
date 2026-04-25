#include <stdio.h>

int main(){

    float a, b, c;
    printf("Informe os valores dos lados: \n");
    scanf("%f %f %f",&a, &b, &c);
    if(a<b+c && b<a+c && c<a+b){
         printf("Formam um triangulo ");
        if(a == b && b == c){
            printf("equilatero\n");
        }
        else if(a == b || b == c || a == c){
            printf("isosceles\n");
        }
        else {
            printf("escaleno\n");
        }
    }
    else {
        printf("Nao formam um triangulo valido!\n");
    }
    
    return 0;
}