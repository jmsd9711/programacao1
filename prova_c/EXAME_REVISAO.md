# Prova de Revisão — Bitwise e Laços de Repetição (C)

**Conteúdo:** operadores bit a bit (`&`, `|`, `^`, `~`, `<<`, `>>`) e laços de repetição (`for`, `while`, `do-while`, `break`, `continue`)

**Como estudar:** resolva tudo no papel primeiro, como na prova real. Depois compile e rode os programas da pasta `teste_mesa/` para conferir suas respostas, e compare com o `GABARITO.md`.

- Para compilar tudo e rodar de uma vez: `bash compilar.sh` (ou compile individualmente: `gcc teste_mesa/ex1.c -o ex1 && ./ex1`)

---

## Questão 1 — Verdadeiro ou Falso (V/F)

Escreva **V** ou **F** e justifique em uma linha.

### Bitwise

1. ( v ) O trecho `printf("%d", 5 & 3);` imprime 1.
2. ( f ) O operador `<<` desloca os bits para a **direita**.
3. ( v ) Em um `int` de 32 bits, o trecho `printf("%d", ~0);` imprime -1.
4. ( f ) A expressão `x | 0` sempre resulta em 0, para qualquer valor de x.
5. ( f ) No XOR (`^`), o bit de resultado é 1 quando os dois bits são **iguais**.
6. ( v ) O trecho `printf("%d", 7 >> 1);` imprime 3.
7. ( v ) O trecho `printf("%d", 1 << 4);` imprime 16.
8. ( v ) O trecho `printf("%d", 0xFF & 0x0F);` imprime 15.
9. ( v ) O operador `~` é a negação lógica (NOT lógico).
10. ( f ) Com `x = 8`, o trecho `printf("%d", x & 8 == 8);` imprime 1.

### Laços de repetição

11. ( v ) O laço `do...while` executa o corpo pelo menos uma vez, mesmo que a condição seja falsa.
12. ( f ) O trecho `while (0) { ... }` executa o corpo exatamente uma vez.
13. ( f ) O comando `break` dentro de laços aninhados encerra **todos** os laços de uma só vez.
14. ( v ) O comando `continue` interrompe a iteração atual e pula para a próxima.
15. ( v ) O laço `for (i = 0; i < 10; i++)` executa o corpo 10 vezes.
16. ( v ) O laço `for (;;)` é um laço infinito válido em C.

---

## Questão 2 — Teste de mesa

Para cada programa, complete a tabela de teste de mesa e escreva a **saída exata**. A primeira linha já vem preenchida como exemplo. Os arquivos estão em `teste_mesa/ex1.c` a `ex9.c` — rode-os depois para conferir.

### ex1 — Contando bits (while + AND + shift)

```c
#include <stdio.h>
int main() {
    int x = 13;        // 1101 em binário
    int count = 0;
    while (x > 0) {
        count += x & 1;
        x >>= 1;
    }
    printf("%d\n", count);
    return 0;
}
```

| Iteração | x (antes) | x & 1 | count (depois) | x >>= 1 (depois) | x > 0? |
|----------|-----------|-------|----------------|------------------|--------|
| 1        | 13        | 1     | 1              | 6                | V      |
| 2        |           |       |                |                  |        |
| 3        |           |       |                |                  |        |
| 4        |           |       |                |                  |        |

**Saída:** ________________

### ex2 — Potências de 2 (for + shift)

```c
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", 1 << i);
    }
    printf("\n");
    return 0;
}
```

| i | 1 << i | saída acumulada |
|---|--------|-----------------|
| 0 | 1      | "1 "            |
| 1 |        |                 |
| 2 |        |                 |
| 3 |        |                 |
| 4 |        |                 |

**Saída:** ________________

### ex3 — Soma dos ímpares (for + continue)

```c
#include <stdio.h>
int main() {
    int soma = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
```

| i | i % 2 == 0? | ação                 | soma |
|---|-------------|----------------------|------|
| 1 | F           | soma += 1            | 1    |
| 2 | V           | continue (não soma)  | 1    |
| 3 |             |                      |      |
| 4 |             |                      |      |
| 5 |             |                      |      |
| 6 |             |                      |      |
| 7 |             |                      |      |
| 8 |             |                      |      |
| 9 |             |                      |      |
| 10|             |                      |      |

**Saída:** ________________

### ex4 — do-while (dividindo por 2)

```c
#include <stdio.h>
int main() {
    int n = 7;
    int cont = 0;
    do {
        n /= 2;
        cont++;
    } while (n > 0);
    printf("n = %d, cont = %d\n", n, cont);
    return 0;
}
```

| Iteração | n (antes) | n /= 2 (depois) | cont | n > 0? |
|----------|-----------|-----------------|------|--------|
| 1        | 7         | 3               | 1    | V      |
| 2        |           |                 |      |        |
| 3        |           |                 |      |        |

**Saída:** ________________

### ex5 — Invertendo bits com XOR

```c
#include <stdio.h>
int main() {
    unsigned char x = 0b1010;  // 10
    x ^= 0b1111;               // inverte os 4 bits
    printf("%u\n", x);
    return 0;
}
```

| x (antes) | máscara | x ^ máscara (binário) | x (decimal) |
|-----------|---------|-----------------------|-------------|
| 0b1010    | 0b1111  | 0b0101                | 5           |

**Saída:** ________________

### ex6 — Laços aninhados com break

```c
#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 1)
                break;
            printf("%d%d ", i, j);
        }
    }
    printf("\n");
    return 0;
}
```

| i | j | j == 1? | ação                         | saída acumulada |
|---|---|---------|------------------------------|-----------------|
| 0 | 0 | F       | imprime                      | "00 "           |
| 0 | 1 | V       | break (sai do laço interno)  | "00 "           |
| 1 | 0 |         |                              |                 |
| 1 | 1 |         |                              |                 |
| 2 | 0 |         |                              |                 |
| 2 | 1 |         |                              |                 |

**Saída:** ________________

### ex7 — Extraindo nibbles (shift + máscara)

```c
#include <stdio.h>
int main() {
    unsigned char b = 0b10101100;      // 172
    unsigned char alto = (b >> 4) & 0x0F;
    unsigned char baixo = b & 0x0F;
    printf("%u %u\n", alto, baixo);
    return 0;
}
```

| b (binário) | b >> 4        | (b >> 4) & 0x0F | b & 0x0F |
|-------------|---------------|-----------------|----------|
| 10101100    | 00001010      | 1010 (10)       | 1100 (12)|

**Saída:** ________________

### ex8 — Potência de 2 (truque `x & (x - 1)`)

```c
#include <stdio.h>
int main() {
    int x = 16;
    if ((x & (x - 1)) == 0)
        printf("potencia de 2\n");
    else
        printf("nao e potencia\n");

    int y = 18;
    if ((y & (y - 1)) == 0)
        printf("potencia de 2\n");
    else
        printf("nao e potencia\n");
    return 0;
}
```

| valor | binário | valor - 1 | valor & (valor - 1) | resultado        |
|-------|---------|-----------|---------------------|------------------|
| 16    | 10000   | 01111     | 00000 (0)           | potencia de 2    |
| 18    | 10010   | 10001     | 10000 (16)          | nao e potencia   |

**Saída:**
```
________________
________________
```

### ex9 — Fibonacci (for + troca de variáveis)

```c
#include <stdio.h>
int main() {
    int a = 0, b = 1, i;
    for (i = 0; i < 6; i++) {
        printf("%d ", a);
        int t = a + b;
        a = b;
        b = t;
    }
    printf("\n");
    return 0;
}
```

| i | a (antes) | b (antes) | t = a + b | a = b (depois) | b = t (depois) | saída acumulada |
|---|-----------|-----------|-----------|----------------|----------------|-----------------|
| 0 | 0         | 1         | 1         | 1              | 1              | "0 "            |
| 1 |           |           |           |                |                |                 |
| 2 |           |           |           |                |                |                 |
| 3 |           |           |           |                |                |                 |
| 4 |           |           |           |                |                |                 |
| 5 |           |           |           |                |                |                 |

**Saída:** ________________

---

## Questão 3 — Múltipla escolha

1. Em um `int` de 32 bits (complemento de dois), qual é o valor de `~12`?
   a) 3 &nbsp;&nbsp; b) -13 &nbsp;&nbsp; c) 12 &nbsp;&nbsp; d) -12

2. Quantas vezes o corpo do laço `for (i = 2; i <= 8; i += 2)` é executado?
   a) 3 &nbsp;&nbsp; b) 4 &nbsp;&nbsp; c) 5 &nbsp;&nbsp; d) 6

3. O que o código abaixo imprime?

   ```c
   int x = 0;
   while (x < 5) {
       if (x == 3)
           break;
       x++;
   }
   printf("%d", x);
   ```
   a) 0 &nbsp;&nbsp; b) 3 &nbsp;&nbsp; c) 4 &nbsp;&nbsp; d) 5

4. Qual expressão testa **corretamente** se o bit de valor 8 (bit 3) de `x` está ligado?
   a) `x & 8` &nbsp;&nbsp; b) `(x & 8) == 8` &nbsp;&nbsp; c) `x == 8` &nbsp;&nbsp; d) `x | 8` &nbsp;&nbsp; e) `x & 8 == 8`

5. O que o código abaixo imprime?

   ```c
   int i = 10;
   do {
       i -= 3;
   } while (i > 0);
   printf("%d", i);
   ```
   a) 1 &nbsp;&nbsp; b) -2 &nbsp;&nbsp; c) 0 &nbsp;&nbsp; d) -1

---

## Questão 4 — Complete o código

1. Complete para contar quantos bits iguais a 1 existem em `x = 29` (11101 em binário):

   ```c
   int x = 29;
   int count = 0;
   while (x != 0) {
       count += ______;   // descobre o bit menos significativo
       x = ______;        // desloca 1 bit para a direita
   }
   printf("%d\n", count); // deve imprimir 4
   ```

2. Complete para imprimir "par" quando o bit menos significativo de `n` for 0:

   ```c
   int n = 42;
   if (______)
       printf("par\n");
   else
       printf("impar\n");
   ```
