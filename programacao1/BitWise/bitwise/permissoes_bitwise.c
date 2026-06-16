#include <stdio.h>

// Definindo as máscaras de bits para cada permissão (padrão POSIX)
#define S_IXOTH 0x01 // 001 em binário -> Execução (x)
#define S_IWOTH 0x02 // 010 em binário -> Escrita (w)
#define S_IROTH 0x04 // 100 em binário -> Leitura (r)

int main() {
    // --- 1. DEFINIÇÃO DE PERMISSÕES ---
    // Simula a permissão "5" (Leitura + Execução -> 4 + 1) usando Bitwise OR
    unsigned char permissao_diretorio = S_IROTH | S_IXOTH; 

    printf("Valor numerico da permissao configurada: %d\n\n", permissao_diretorio);

    // --- 2. VALIDAÇÃO DE ACESSO INLINE ---
    
    // Cenário A: Usuário tenta LER o diretório
    printf("Tentando ler o diretorio... ");
    // O operador & isola o bit de leitura. Se o resultado for diferente de 0, o bit está ativo.
    if ((permissao_diretorio & S_IROTH) != 0) {
        printf("ACESSO PERMITIDO (Bit da Leitura ativo)\n");
    } else {
        printf("ACESSO NEGADO\n");
    }

    // Cenário B: Usuário tenta GRAVAR no diretório
    printf("Tentando gravar no diretorio... ");
    // Validação inline direta para o bit de escrita
    if ((permissao_diretorio & S_IWOTH) != 0) {
        printf("ACESSO PERMITIDO\n");
    } else {
        printf("ACESSO NEGADO (Erro: Permission Denied)\n");
    }

    // --- 3. MODIFICAÇÃO EM TEMPO DE EXECUÇÃO ---
    // Adicionando permissão de escrita dinamicamente (Equivalente a chmod +w)
    permissao_diretorio |= S_IWOTH; 
    printf("\n[Sistema] Permissao de escrita adicionada via Bitwise OR.\n");

    // Nova tentativa de gravação após a modificação dos bits
    printf("Tentando gravar novamente... ");
    if ((permissao_diretorio & S_IWOTH) != 0) {
        printf("ACESSO PERMITIDO (Agora o bit esta ativo!)\n");
    }

    return 0;
}
