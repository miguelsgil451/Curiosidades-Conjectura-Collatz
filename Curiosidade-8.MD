# Curiosidade nº 8

## Fluxo de Gauss: A Relação entre o Fator Ímpar do Número de Fermat e seu Índice como Termo da Sequência

Na análise da sequência de Collatz, um padrão fascinante emerge ao observar **números do tipo Fermat**, ou seja, termos que se expressam como:

$
3x + 1 = 2^k \times \text{ímpar}
$

Nesses casos, o fator ímpar não surge de forma arbitrária. Quando comparamos:

- o **índice $n$** em que o número de Fermat aparece na sequência, com
- o **índice $m$** em que o fator ímpar (o valor multiplicado por $2^k$) aparece **como número $x$** na sequência,

percebemos um **padrão de crescimento aritmético na diferença $n - m$**.

---

### Tabela de Análise

| Índice (n) | Ímpar (x) | $3x + 1$ | Fatoração        | Tipo   |
|------------|-----------|--------------|------------------|--------|
| 3          | 7         | 22           | $2 \times 11$      | Euler  |
| 4          | 9         | 28           | $2^2 \times 7$     | Fermat |
| 6          | 13        | 40           | $2^3 \times 5$     | Fermat |
| 8          | 17        | 52           | $2^2 \times 13$    | Fermat |
| 9          | 19        | 58           | $2 \times 29$      | Euler  |
| 12         | 25        | 76           | $2^2 \times 19$    | Fermat |
| 16         | 33        | 100          | $2^2 \times 25$    | Fermat |

---

### Análise das Diferenças

Identificamos quando um **fator ímpar** de um número de Fermat também aparece anteriormente na sequência como valor $x$. Calculamos então:

$
\Delta = \text{Índice do Fermat} - \text{Índice do fator ímpar}
$

| Fator Ímpar | Índice do fator | Índice do Fermat | Diferença ($\Delta$) |
|-------------|------------------|------------------|---------------------------|
| 7           | 3                | 4                | 1                         |
| 13          | 6                | 8                | 2                         |
| 19          | 9                | 12               | 3                         |
| 25          | 12               | 16               | 4                         |

→ Diferença entre os índices: **1, 2, 3, 4...**

---

### Padrão Descoberto

A diferença entre os índices forma uma:

$
\textbf{Progressão Aritmética com razão 1}
$

Esse padrão revela que:

> Os **fatores ímpares** de números do tipo Fermat **reaparecem na sequência como valores $x$** com **diferenças crescentes e ordenadas** de índice.

---

### Conclusão

Essa regularidade demonstra que os fatores ímpares de números Fermat na sequência de Collatz não aparecem de maneira aleatória. Eles seguem uma ordem previsível:

- primeiro surgem como valores de $x$,
- e reaparecem multiplicados por potências de 2 em posições posteriores,  
- com **diferenças entre índices que crescem de 1 em 1**.

> Isso sugere que a sequência de Collatz carrega **estruturas matemáticas profundas**, alinhadas com progressões aritméticas e **relações simétricas ocultas** entre seus termos.