# Gabarito — Prova de Revisão (Bitwise e Laços)

---

## Questão 1 — Verdadeiro ou Falso

### Bitwise

| # | Resposta | Justificativa |
|---|----------|---------------|
| 1 | **V** | `5 & 3`: 0101 & 0011 = 0001 = 1 |
| 2 | **F** | `<<` desloca para a **esquerda**. `>>` desloca para a direita |
| 3 | **V** | `~0` = 0xFFFFFFFF = -1 em complemento de dois (todos os bits 1) |
| 4 | **F** | `x \| 0` = x (o OR com 0 preserva os bits). `x & 0` é que resulta em 0 |
| 5 | **F** | No XOR o bit de resultado é 1 quando os bits são **diferentes** (0^1 ou 1^0) |
| 6 | **V** | `7 >> 1`: 0111 → 0011 = 3 (deslocar 1 para a direita divide por 2) |
| 7 | **V** | `1 << 4` = 0001 → 0001 0000 = 16 (deslocar 1 para a esquerda multiplica por 2) |
| 8 | **V** | `0xFF & 0x0F` = 11111111 & 00001111 = 00001111 = 15 |
| 9 | **F** | `~` é o NOT **bit a bit** (inverte cada bit). O NOT lógico é `!` |
| 10 | **F** | `==` tem precedência **maior** que `&`, então a expressão é `x & (8 == 8)` = `8 & 1` = **0**. Imprime 0, não 1 |

### Laços de repetição

| # | Resposta | Justificativa |
|---|----------|---------------|
| 11 | **V** | A condição do `do...while` só é testada **depois** da primeira execução |
| 12 | **F** | `while (0)` testa a condição antes: como é falsa, o corpo nunca executa (0 vezes) |
| 13 | **F** | `break` encerra apenas o laço **mais interno** em que ele está |
| 14 | **V** | `continue` pula o resto do corpo e volta para o teste da condição |
| 15 | **V** | i assume 0, 1, 2, ..., 9 → 10 execuções |
| 16 | **V** | Sem inicialização, condição ou incremento: nunca termina (precisa de `break`/`return`) |

---

## Questão 2 — Teste de mesa (gabarito)

### ex1 — Contando bits (saída: **3**)

| Iteração | x (antes) | x & 1 | count (depois) | x >>= 1 (depois) | x > 0? |
|----------|-----------|-------|----------------|------------------|--------|
| 1        | 13 (1101) | 1     | 1              | 6 (0110)         | V      |
| 2        | 6 (0110)  | 0     | 1              | 3 (0011)         | V      |
| 3        | 3 (0011)  | 1     | 2              | 1 (0001)         | V      |
| 4        | 1 (0001)  | 1     | 3              | 0 (0000)         | F      |

O programa conta os bits 1: 13 = 1101 tem **3 bits ligados**.

### ex2 — Potências de 2 (saída: `1 2 4 8 16`)

| i | 1 << i | saída acumulada |
|---|--------|-----------------|
| 0 | 1      | "1 "            |
| 1 | 2      | "1 2 "          |
| 2 | 4      | "1 2 4 "        |
| 3 | 8      | "1 2 4 8 "      |
| 4 | 16     | "1 2 4 8 16 "   |

### ex3 — Soma dos ímpares (saída: **25**)

| i | i % 2 == 0? | ação                 | soma |
|---|-------------|----------------------|------|
| 1 | F           | soma += 1            | 1    |
| 2 | V           | continue (não soma)  | 1    |
| 3 | F           | soma += 3            | 4    |
| 4 | V           | continue             | 4    |
| 5 | F           | soma += 5            | 9    |
| 6 | V           | continue             | 9    |
| 7 | F           | soma += 7            | 16   |
| 8 | V           | continue             | 16   |
| 9 | F           | soma += 9            | 25   |
| 10| V           | continue             | 25   |

Soma dos ímpares de 1 a 10: 1 + 3 + 5 + 7 + 9 = **25**.

### ex4 — do-while (saída: `n = 0, cont = 3`)

| Iteração | n (antes) | n /= 2 (depois) | cont | n > 0? |
|----------|-----------|-----------------|------|--------|
| 1        | 7         | 3               | 1    | V      |
| 2        | 3         | 1               | 2    | V      |
| 3        | 1         | 0               | 3    | F      |

O corpo executa **antes** de testar, por isso divide 7→3→1→0 e só para quando n = 0.

### ex5 — XOR (saída: **5**)

| x (antes) | máscara | x ^ máscara (binário) | x (decimal) |
|-----------|---------|-----------------------|-------------|
| 0b1010    | 0b1111  | 0b0101                | 5           |

XOR com uma máscara de 1s **inverte** os bits: 1010 → 0101 = 5. (Note: 0b... é extensão do GCC/MinGW; em C padrão use hexa/decimais.)

### ex6 — Laços aninhados com break (saída: `00 10 20`)

| i | j | j == 1? | ação                         | saída acumulada |
|---|---|---------|------------------------------|-----------------|
| 0 | 0 | F       | imprime                      | "00 "           |
| 0 | 1 | V       | break (sai do laço interno)  | "00 "           |
| 1 | 0 | F       | imprime                      | "00 10 "        |
| 1 | 1 | V       | break                        | "00 10 "        |
| 2 | 0 | F       | imprime                      | "00 10 20 "     |
| 2 | 1 | V       | break                        | "00 10 20 "     |

O `break` sai do laço de `j`, mas o laço de `i` continua — por isso só o `j == 0` imprime em cada linha.

### ex7 — Nibbles (saída: `10 12`)

| b (binário) | b >> 4        | (b >> 4) & 0x0F | b & 0x0F |
|-------------|---------------|-----------------|----------|
| 10101100    | 00001010      | 00001010 (10)   | 00001100 (12)|

O `& 0x0F` "corta" os 4 bits altos, sobrando só o nibble desejado: alto = 1010 = 10, baixo = 1100 = 12.

### ex8 — Potência de 2 (saída: `potencia de 2` / `nao e potencia`)

| valor | binário | valor - 1 | valor & (valor - 1) | resultado        |
|-------|---------|-----------|---------------------|------------------|
| 16    | 10000   | 01111     | 00000 (0)           | potencia de 2    |
| 18    | 10010   | 10001     | 10000 (16)          | nao e potencia   |

Truque clássico: potências de 2 têm **um único bit 1**, então `x & (x - 1)` zera esse bit → resultado 0.

### ex9 — Fibonacci (saída: `0 1 1 2 3 5`)

| i | a (antes) | b (antes) | t = a + b | a = b (depois) | b = t (depois) | saída acumulada |
|---|-----------|-----------|-----------|----------------|----------------|-----------------|
| 0 | 0         | 1         | 1         | 1              | 1              | "0 "            |
| 1 | 1         | 1         | 2         | 1              | 2              | "0 1 "          |
| 2 | 1         | 2         | 3         | 2              | 3              | "0 1 1 "        |
| 3 | 2         | 3         | 5         | 3              | 5              | "0 1 1 2 "      |
| 4 | 3         | 5         | 8         | 5              | 8              | "0 1 1 2 3 "    |
| 5 | 5         | 8         | 13        | 8              | 13             | "0 1 1 2 3 5 "  |

---

## Questão 3 — Múltipla escolha

1. **b) -13** — `~12`: 0000...1100 → 1111...0011 = -13 (complemento de dois: ~x = -x - 1).
2. **b) 4** — i = 2, 4, 6, 8 (quando i = 10 a condição falha).
3. **b) 3** — o `break` sai do laço quando x == 3, antes do incremento.
4. **b) `(x & 8) == 8`** — e o item e) (`x & 8 == 8`) está errado por precedência: `==` vale mais que `&`, então vira `x & (8 == 8)` = `x & 1`. (Em dúvida? **use parênteses**.)
5. **b) -2** — i: 10→7→4→1→-2; quando i = -2, `i > 0` é falso e o laço termina.

---

## Questão 4 — Complete o código

1. `count += x & 1;` e `x = x >> 1;` (ou `x >>= 1;`)
   - Mesa: x = 29 (11101) → bits: 1,0,1,1,1 → count = 4.
2. `if ((n & 1) == 0)` (ou `if (!(n & 1))`)
   - 42 é par (bit 0 = 0), então imprime "par".

---

## Dicas de revisão (resumo rápido)

- `<< 1` multiplica por 2 · `>> 1` divide por 2 (em inteiros).
- `x & 1` diz se o bit 0 está ligado (número ímpar).
- `x | (1 << k)` **liga** o bit k · `x & ~(1 << k)` **desliga** · `x ^ (1 << k)` **inverte**.
- `x & (x - 1) == 0` → x é potência de 2.
- `while` testa antes, `do-while` testa depois.
- `break` sai do laço mais interno; `continue` pula a iteração atual.
- Precedência: `==` > `&` > `^` > `|`. Na dúvida, use parênteses!
