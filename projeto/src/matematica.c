#include "matematica.h"
#define PI 3.14159265358979323846

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    return a / b;
}

double area_quadrado(double lado) {
    return lado * lado;
}

double area_retangulo(double base, double altura) {
    return base * altura;
}

double area_circulo(double raio) {
    return PI * raio * raio;
}

double perimetro_retangulo(double base, double altura){
    return 2 * base + 2 * altura;
}

double perimetro_circulo(double raio) {
    return 2.0 * PI * raio;
}

double volume_cilindro(double raio, double altura) {
    return PI * raio * raio * altura;
}

unsigned long long fatorial (unsigned int n) {
    unsigned long long resultado = 1;

    for (unsigned int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int mdc (int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

unsigned long long fibonacci(unsigned int n) {
    
    if (n == 0) {
        return 0;        
    }

    if (n == 1) {
        return 1;
    }

    unsigned long long anterior = 0;
    unsigned long long atual = 1;

    for (unsigned int i = 2; i <= n; i++) {
        unsigned long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    
    return atual;
}