#include <stdio.h>

int main() {
    // Dados originais que ocupariam 3 bytes separados
    unsigned char id     = 5; // Em binário: 101 (usa 3 bits)
    unsigned char status = 2; // Em binário: 10  (usa 2 bits)
    unsigned char ativo  = 1; // Em binário: 1   (usa 1 bit)

    // --- COMPACTAÇÃO ---
    // Deslocamos os bits para suas posições e unimos com o operador OR (|)
    unsigned char compactado = 0;
    
    compactado |= (id << 3);     // Move o ID 3 casas para a esquerda
    compactado |= (status << 1); // Move o Status 1 casa para a esquerda
    compactado |= ativo;         // Mantém o Ativo na última posição

    printf("Byte compactado (em decimal): %d\n", compactado);
    // Resultado binário final no byte: 00101101

    // --- DESCOMPACTAÇÃO ---
    // Isolamos os bits usando deslocamento para a direita (>>) e máscara AND (&)
    unsigned char id_recuperado     = (compactado >> 3) & 0x07; // 0x07 isola 3 bits (111)
    unsigned char status_recuperado = (compactado >> 1) & 0x03; // 0x03 isola 2 bits (11)
    unsigned char ativo_recuperado  = compactado & 0x01;        // 0x01 isola 1 bit (1)

    // Exibição dos dados recuperados
    printf("\nDados Recuperados:\n");
    printf("ID: %d\n", id_recuperado);
    printf("Status: %d\n", status_recuperado);
    printf("Ativo: %d\n", ativo_recuperado);

    return 0;
}