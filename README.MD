# Curiosidades na Conjectura de Collatz

**Autor**: <a href="https://mgil-portfolio.netlify.app/" target="_blank">Miguel Gil</a> <br>
**Site**: <a href="http://127.0.0.1:5500/gauss_table.html" target="_blank">Tabela de Gauss</a>

Este artigo apresenta um conjunto de curiosidades matemáticas relacionadas à Conjectura de Collatz, com ênfase na análise de padrões estruturais e comportamentais observados em subsequências específicas. Antes de prosseguir com as explorações empíricas, estabelecem-se abaixo as definições formais que servirão de base conceitual para os estudos apresentados.

---

## Definições Auxiliares

- **Paridade de zero**: Define-se 0 como um número **par**.
- **Função geradora de números pares**: $f(x) = 2x$, com $x \in \mathbb{N}$.
- **Função geradora de números ímpares**: $f(x) = 2x + 1$, com $x \in \mathbb{N}$.

---

## Definições Propostas

As definições a seguir categorizam determinados subconjuntos de números, com base em propriedades específicas observadas no contexto da Conjectura de Collatz:

- **Número de Fermat (F)**: Qualquer número par $n$ tal que $n / 2$ também é par. Formalmente, $n = 2^k \times m$, com $k \geq 2$ e $m$ ímpar.
  
- **Número de Colapso de Fermat (CF)**: Caso particular de um Número de Fermat onde $n$ é uma potência de dois, ou seja, $n = 2^k$.

- **Número de Euler (E)**: Todo número par $n$ tal que $n / 2$ resulta em um número ímpar.

- **Número de Gauss-Fermat (GF)**: Todo número ímpar $x$ tal que $3x + 1$ é um Número de Fermat.

- **Número de Gauss-Euler (GE)**: Todo número ímpar $x$ tal que $3x + 1$ é um Número de Euler.

- **Fluxo de Gauss (FG)**: Função que aplica a transformação $f(x) = 3(2x + 1) + 1 = 6x + 4$, correspondendo à aplicação do mapeamento da Conjectura de Collatz diretamente sobre números ímpares gerados pela função $x = 2n + 1$.

---

## Tabela de Gauss (TG)

A Tabela de Gauss organiza os elementos do Fluxo de Gauss de forma sistemática, associando a entrada (índice) ao seu respectivo número ímpar, o valor obtido pela transformação $3x + 1$, a fatoração desse valor (caso seja par), e sua classificação conforme as categorias anteriores.

| **Coluna**        | **Descrição**                                                                 |
|-------------------|--------------------------------------------------------------------------------|
| **Índice (n)**    | Número natural utilizado como entrada na função $x = 2n + 1$, gerando um número ímpar. |
| **Ímpar (x)**     | Número ímpar correspondente, obtido pela função geradora de ímpares. |
| **$3x + 1$**       | Resultado da transformação aplicada ao número ímpar, associada à dinâmica da Conjectura de Collatz. |
| **Fatoração**     | Decomposição do número par resultante da operação $3x + 1$, destacando potências de dois. |
| **Tipo**          | Classificação segundo as definições: <br> 🔹 **F** para Números de Fermat <br> 🔸 **E** para Números de Euler |