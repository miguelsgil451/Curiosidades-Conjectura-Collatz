# Curiosidade nº 3

## Fluxo de Gauss: Ora Fermat, Ora Euler

Dado o fluxo definido pela função:

$$
f(x) = 6x + 4
$$

Podemos analisar o comportamento dos resultados de acordo com a paridade de $x$. A tabela a seguir apresenta os valores obtidos e sua classificação como **Número de Fermat** (F) ou **Número de Euler** (E):

### Tabela de Gauss

| $x$ | $f(x) = 6x + 4$ | Tipo        | Fatoração     |
|------:|------------------:|-------------|----------------|
| 0     | 4                | Fermat      | $2^2$        |
| 1     | 10               | Euler       | $2 \times 5$ |
| 2     | 16               | Fermat      | $2^4$        |
| 3     | 22               | Euler       | $2 \times 11$|
| 4     | 28               | Fermat      | $2^2 \times 7$|
| 5     | 34               | Euler       | $2 \times 17$|
| 6     | 40               | Fermat      | $2^3 \times 5$|
| 7     | 46               | Euler       | $2 \times 23$|
| 8     | 52               | Fermat      | $2^2 \times 13$|
| 9     | 58               | Euler       | $2 \times 29$|
| 10    | 64               | Fermat      | $2^6$        |
| 11    | 70               | Euler       | $2 \times 35$|

### Observação

A sequência alterna perfeitamente entre **Fermat (F)** e **Euler (E)**. Isso ocorre por causa da estrutura da função:

$$
f(x) = 6x + 4
$$

Sabemos que:
- $6x$ é sempre par, pois 6 é par.
- Somando 4 a um número par, o resultado continua par.

Agora, consideremos a paridade de $x$:

### Caso 1: $x$ par
Se $ x $ é par, então $x = 2k$ para algum $k \in \mathbb{N}$. Substituindo:

$$
f(x) = 6(2k) + 4 = 12k + 4
$$

$$
f(x) = 4(3k + 1)
$$

Ou seja, $f(x)$ é divisível por 4 → é um **Número de Fermat**.

---

### Caso 2: $x$ ímpar
Se $ x $ é ímpar, então $x = 2k + 1$. Substituindo:

$$
f(x) = 6(2k + 1) + 4 = 12k + 6 + 4 = 12k + 10
$$

$$
f(x) = 2(6k + 5)
$$

Como $6k + 5$ é ímpar, então $f(x)$ é **par, mas não divisível por 4**, o que caracteriza um **Número de Euler**.

---

### Conclusão

> O Fluxo de Gauss alterna perfeitamente entre **Números de Fermat** e **Números de Euler** porque a paridade de $x$ determina diretamente o tipo do número:
>
> - $x$ par → $f(x) \equiv 0 \pmod{4}$ → **Gauss-Fermat**
> - $x$ ímpar → $f(x) \equiv 2 \pmod{4}$ → **Gauss-Euler**