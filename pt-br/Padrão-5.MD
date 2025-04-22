# Padrão nº 5

## Fluxo de Gauss: Há um padrão na distância entre os expoentes na Fatoração de Fermat

### Tabela de Gauss — Fatoração com Expoente Fixo $2^2$

| Índice (n) | Ímpar (x) | 3x + 1 | Fatoração     | Tipo   |
|------------|-----------|--------|---------------|--------|
| 0          | 1         | 4      | $2^2$     | Fermat |
| 4          | 9         | 28     | $2^2 \times 7$ | Fermat |
| 8          | 17        | 52     | $2^2 \times 13$ | Fermat |
| 12         | 25        | 76     | $2^2 \times 19$ | Fermat |

Ao observar as diferenças entre os índices:

- $4 - 0 = 4 \implies 2^2$
- $8 - 4 = 4 \implies 2^2$
- $12 - 8 = 4 \implies 2^2$

Note que o **espaçamento** entre os índices é sempre $2^2$, ou seja, **4**.

---

### Tabela de Gauss — Fatoração com Expoente Fixo $2^3$

| Índice (n) | Ímpar (x) | 3x + 1 | Fatoração     | Tipo   |
|------------|-----------|--------|---------------|--------|
| 6          | 13        | 40     | $2^3 \times 5$  | Fermat |
| 14         | 29        | 88     | $2^3 \times 11$ | Fermat |
| 22         | 45        | 136    | $2^3 \times 17$ | Fermat |
| 30         | 61        | 184    | $2^3 \times 23$ | Fermat |

Ao observar as diferenças entre os índices:

- $14 - 6 = 8 \implies 2^3$
- $22 - 14 = 8 \implies 2^3$
- $30 - 22 = 8 \implies 2^3$

Aqui, o **espaçamento** entre os índices é sempre $2^3$, ou seja, **8**.

---

### Tabela de Gauss — Fatoração com Expoente Fixo $2^4$

| Índice (n) | Ímpar (x) | 3x + 1 | Fatoração     | Tipo   |
|------------|-----------|--------|---------------|--------|
| 2          | 5         | 16     | $2^4$     | Fermat |
| 18         | 37        | 112    | $2^4 \times 7$ | Fermat |
| 34         | 69        | 208    | $2^4 \times 13$ | Fermat |
| 50         | 101       | 304    | $2^4 \times 19$ | Fermat |

Ao observar as diferenças entre os índices:

- $18 - 2 = 16 \implies 2^4$
- $34 - 18 = 16 \implies 2^4$
- $50 - 34 = 16 \implies 2^4$

Aqui, o **espaçamento** entre os índices é sempre $2^4$, ou seja, **16**.

---

### Padrão Geral

Cada grupo de fatorações de expoentes fixos de 2 ($2^2, 2^3, 2^4, \dots$) aparece **periodicamente** ao longo da sequência de Collatz, e o espaçamento entre seus índices é **exatamente igual ao valor da potência correspondente**.

Ou seja, podemos expressar o espaçamento entre os expoentes como:

$$
f(x) = 2^x
$$


### Conclusão

> O padrão de espaçamento entre os expoentes fixos nas fatorações de Fermat segue uma periodicidade previsível: o espaçamento entre os expoentes de $2^x$ é $2^x$.