# Curiosidade nº 7

## Fluxo de Gauss: A Relação entre o Expoente da Potência de 2 e o Crescimento do Fator Ímpar

Ao analisar os termos da sequência de Collatz que resultam em fatorações do tipo **Fermat** — ou seja, da forma:

$
3x + 1 = 2^e \times \text{ímpar}
$

— percebe-se que os **fatores ímpares** associados seguem uma **progressão aritmética crescente**, com uma diferença constante que depende diretamente do expoente $e$ da potência de 2.

---

### Para $2^2$:

| Índice (n) | $3x + 1$ | Fatoração       | Fator ímpar |
|------------|--------------|------------------|--------------|
| 0          | 4            | $2^2$         | 1            |
| 4          | 28           | $2^2 \times 7$  | 7            |
| 8          | 52           | $2^2 \times 13$ | 13           |
| 12         | 76           | $2^2 \times 19$ | 19           |

→ Fatores ímpares: $1, 7, 13, 19$

→ Diferenças:  
- $7 - 1 = 6$  
- $13 - 7 = 6$  
- $19 - 13 = 6$

---

### Para $2^3$:

| Índice (n) | $3x + 1$ | Fatoração         | Fator ímpar |
|------------|--------------|--------------------|--------------|
| 6          | 40           | $2^3 \times 5$  | 5            |
| 14         | 88           | $2^3 \times 11$ | 11           |
| 22         | 136          | $2^3 \times 17$ | 17           |
| 30         | 184          | $2^3 \times 23$ | 23           |

→ Fatores ímpares: $5, 11, 17, 23$

→ Diferenças:
- $11 - 5 = 6$
- $17 - 11 = 6$
- $23 - 17 = 6$

---

### Para $2^4$:

| Índice (n) | $3x + 1$ | Fatoração          | Fator ímpar |
|------------|--------------|----------------------|--------------|
| 2          | 16           | $2^4$             | 1            |
| 18         | 112          | $2^4 \times 7$     | 7            |
| 34         | 208          | $2^4 \times 13$    | 13           |
| 50         | 304          | $2^4 \times 19$    | 19           |

→ Fatores ímpares: $1, 7, 13, 19$

→ Diferenças:
- $7 - 1 = 6$
- $13 - 7 = 6$
- $19 - 13 = 6$

---

### Formalização

Dado um termo da sequência de Collatz da forma:

$
3x + 1 = 2^e \times k
$

onde $k$ é um número ímpar, então os fatores $k$ seguem uma **progressão aritmética** com razão constante $r = 6$:

$
k_{i+1} = k_i + 6
$

Ou seja:

$
\text{Para um expoente fixo } e, \text{ os fatores ímpares associados aumentam de 6 em 6.}
$

---

### Conclusão

Essa regularidade demonstra uma simetria escondida na estrutura da sequência de Collatz. A constante diferença de **6** entre os fatores ímpares para uma mesma potência de 2 sugere que o **expoente $e$** determina uma **classe específica de progressão aritmética** no universo de fatorações **Fermat**.