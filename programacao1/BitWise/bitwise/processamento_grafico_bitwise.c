/*
Em processamento de imagens digitais, 
uma cor RGB clássica é armazenada em um único 
inteiro de 32 bits (padrão ARGB ou RGBA). 
Cada canal (Alfa, Vermelho, Verde, Azul) ocupa 
exatamente 1 byte (8 bits).As operações bitwise 
são utilizadas para isolar canais de cores, 
ajustar brilho de forma rápida ou 
aplicar máscaras visuais sem o custo de 
processamento de funções matemáticas complexas.
*/
#include <stdio.h>

int main() {
    // Um pixel na memória (formato hexadecimal: 0xAARRGGBB)
    // Alfa (Transparência): FF (255) | Vermelho: 3A (58) | Verde: A9 (169) | Azul: F4 (244)
    unsigned int pixel_original = 0xFF3AA9F4;

    // --- 1. EXTRAÇÃO DOS CANAIS (Bitwise Shift e AND) ---
    // Movemos os bits do canal desejado para a extremidade direita e aplicamos a máscara 0xFF (11111111)
    unsigned char alfa  = (pixel_original >> 24) & 0xFF;
    unsigned char vermelho = (pixel_original >> 16) & 0xFF;
    unsigned char verde = (pixel_original >> 8)  & 0xFF;
    unsigned char azul  = pixel_original         & 0xFF;

    printf("--- Canais Extraídos ---\n");
    printf("Alfa: %d | Vermelho: %d | Verde: %d | Azul: %d\n\n", alfa, vermelho, verde, azul);


    // --- 2. MODIFICAÇÃO (Efeito de Filtro Quente) ---
    // Vamos zerar o canal Azul usando uma máscara inversa (Bitwise AND com NOT)
    // Máscara 0xFFFFFF00 preserva Alfa, Vermelho e Verde, mas zera os 8 bits do Azul
    unsigned int filtro_sem_azul = pixel_original & 0xFFFFFF00;


    // --- 3. RECONSTRUÇÃO DO PIXEL (Bitwise Shift e OR) ---
    // Suponha que queremos criar uma nova cor combinando canais alterados manualmente
    unsigned char novo_v = 255; // Forçando vermelho máximo
    unsigned char novo_g = verde;
    unsigned char novo_b = azul;
    unsigned char novo_a = alfa;

    unsigned int novo_pixel = (novo_a << 24) | (novo_v << 16) | (novo_g << 8) | novo_b;

    printf("--- Resultados em Hexadecimal ---\n");
    printf("Pixel Original:    0x%X\n", pixel_original);
    printf("Filtro (Sem Azul): 0x%X\n", filtro_sem_azul);
    printf("Novo Pixel:        0x%X\n", novo_pixel);

    return 0;
}
