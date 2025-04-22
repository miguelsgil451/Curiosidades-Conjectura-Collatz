# Padrão nº 6

## Fluxo de Gauss: Relação com a Fatoração do Número de Euler e o Índice dos Ímpares

Ao observar os termos da sequência de Collatz, particularmente aqueles que resultam em uma fatoração do tipo **Euler** (ou seja, da forma $2 \times p$, com $p$ sendo um número ímpar), podemos perceber um padrão interessante nas diferenças entre os índices $n$ dos números ímpares e os índices dos próximos termos com fatoração de **Euler** ou **Fermat**. A diferença entre os índices segue uma progressão aritmética crescente.

### Tabela de Gauss

| Índice (n) | Ímpar (x) | $3x + 1$ | Fatoração       | Tipo   |
|------------|-----------|------------|-----------------|--------|
| 1          | 3         | 10         | $2 \times \mathbf{5}$  | Euler  |
| 2          | **5**         | 16         | $2^4$         | Fermat |
| 3          | 7         | 22         | $2 \times \mathbf{11}$ | Euler  |
| 5          | **11**        | 34         | $2 \times \mathbf{17}$ | Euler  |
| 7          | 15        | 52         | $2 × \mathbf{23}$ | Fermat |
| 8          | **17**        | 52         | $2^2 \times 13$ | Fermat |
| 11         | **23**        | 70         | $2 \times 35$ | Euler  |

### Observando as Diferenças entre os Índices:

Vamos comparar a diferença entre os índices $n$ dos números ímpares e os índices do próximo termo com fatoração de Fermat ou Euler:

- $2 - 1 = 1$
- $5 - 3 = 2$
- $8 - 5 = 3$
- $11 - 7 = 4$

Ou seja, a diferença entre os índices segue uma progressão aritmética crescente com uma diferença constante de 1 entre os valores consecutivos. Essa progressão aritmética pode ser expressa como:

$$
\Delta n = n_{i+1} - n_i = i \quad \text{onde } i \text{ é o índice da sequência}
$$

### Formalização

A progressão aritmética que descreve as diferenças entre os índices dos números ímpares que resultam em fatorações do tipo **Euler** ou **Fermat** pode ser modelada como:

$$
\Delta n = 1, 2, 3, 4, \dots
$$

Onde a diferença entre cada índice consecutivo aumenta de forma constante.

Para o $i$-ésimo índice, a diferença entre o índice atual $n_i$ e o próximo índice $n_{i+1}$ será:

$$
n_{i+1} = n_i + i
$$

Por exemplo:
- Para o índice $n_1 = 1$, a diferença até o próximo índice $n_2 = 2$ é $1$.
- Para o índice $n_2 = 3$, a diferença até o próximo índice $n_3 = 5$ é $2$.
- E assim por diante.

### Conclusão

> Esse padrão revela uma estrutura regular na sequência de Collatz, que pode ser útil para prever o comportamento de números ímpares que geram fatorações do tipo **Euler** ou **Fermat**.