# Padrões na Conjectura de Collatz

**Autor**: <a href="https://mgil-portfolio.netlify.app/" target="_blank">Miguel Gil</a> <br>
**Site 1**: <a href="https://patterns-collatz-conjecture.netlify.app/gauss_table.html" target="_blank">Gaussian table</a> <br>
**Site 2**: <a href="https://patterns-collatz-conjecture.netlify.app/collatz_graphic.html" target="_blank">Collatz Graphic</a>

Este artigo explora alguns padrões interessantes ligados à famosa Conjectura de Collatz, com foco em entender como certos números se comportam e se organizam dentro dessa sequência. A ideia é observar padrões estruturais e comportamentais que aparecem quando analisamos partes específicas da sequência.

Antes de mergulhar nas análises e experimentos, vamos definir alguns conceitos importantes que vão servir como base para os estudos apresentados ao longo do texto.

---

## Definições Auxiliares

- **Paridade de zero**: Define-se 0 como um número **par**.
- **Função geradora de números pares**: $f(x) = 2x$, com $x \in \mathbb{N}$.
- **Função geradora de números ímpares**: $f(x) = 2x + 1$, com $x \in \mathbb{N}$.

---

## Definições Propostas

As definições abaixo classificam certos tipos de números que aparecem quando estudamos a Conjectura de Collatz. Os nomes são apenas convenções criadas para facilitar a análise dos padrões.

- **Número de Fermat (F)**: É um número **par** que continua **par mesmo quando dividido por 2 uma vez**. Em outras palavras, ele pode ser dividido por 2 **duas ou mais vezes** antes de virar ímpar. Exemplo: 16 → 8 → 4 → 2 → 1 (até chegar no ímpar 1, ele foi dividido várias vezes por 2).

- **Número de Colapso de Fermat (CF)**: É um caso especial de Número de Fermat. Aqui, o número é uma **potência exata de 2** — tipo 2, 4, 8, 16, 32, etc. Ou seja, você pode escrever ele como $2^k$.

- **Número de Euler (E)**: É um número **par**, mas que **vira ímpar logo na primeira divisão por 2**. Por exemplo, 6 → 3 (3 é ímpar). Isso acontece porque o número só tem uma divisão por 2 possível antes de sair da paridade.

- **Número de Gauss-Fermat (GF)**: É um número **ímpar** que, quando colocado na fórmula $3x + 1$, resulta num **Número de Fermat**.

- **Número de Gauss-Euler (GE)**: É um número **ímpar** que, ao aplicar $3x + 1$, vira um **Número de Euler**.

- **Fluxo de Gauss (FG)**: É uma função que pega qualquer número natural $n$, transforma em ímpar com $x = 2n + 1$, e depois aplica a transformação da Conjectura de Collatz: $3x + 1$. Juntando tudo dá:  
  $$
  FG(n) = 6n + 4
  $$  

---

## Tabela de Gauss (TG)

A Tabela de Gauss organiza os elementos do Fluxo de Gauss de forma sistemática, associando a entrada (índice) ao seu respectivo número ímpar, o valor obtido pela transformação $3x + 1$, a fatoração desse valor (caso seja par), e sua classificação conforme as categorias anteriores. Ela será usada como base para entender os padrões na Conjectura.

| **Coluna**        | **Descrição**                                                                 |
|-------------------|--------------------------------------------------------------------------------|
| **Índice (n)**    | Número natural utilizado como entrada na função $x = 2n + 1$, gerando um número ímpar. |
| **Ímpar (x)**     | Número ímpar correspondente, obtido pela função geradora de ímpares. |
| **$3x + 1$**       | Resultado da transformação aplicada ao número ímpar, associada à dinâmica da Conjectura de Collatz. |
| **Fatoração**     | Decomposição do número par resultante da operação $3x + 1$, destacando potências de dois. |
| **Tipo**          | Classificação segundo as definições: <br> 🔹 **F** para Números de Fermat <br> 🔸 **E** para Números de Euler |

---

## Contribuição

Este artigo está aberto a sugestões, correções e melhorias. Se você encontrou algo que possa ser aprimorado, teve uma ideia nova relacionada aos padrões da Conjectura de Collatz, ou apenas quer conversar sobre o tema, sinta-se à vontade para contribuir!

Você pode abrir uma issue, enviar um pull request, ou entrar em contato diretamente. Toda ajuda é bem-vinda para tornar este estudo mais completo e acessível.