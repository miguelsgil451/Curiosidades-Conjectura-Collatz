# Padrão nº 9

## Progressão no Número de Passos: A Relação Entre Dobras de um Número e a Quantidade de Subidas e Descidas

Na análise aprofundada da sequência de Collatz, um novo padrão intrigante emerge ao observar a **quantidade de subidas e descidas** que ocorrem durante a trajetória de determinados números até atingir o valor 1.

Quando escolhemos um número qualquer e analisamos seus múltiplos obtidos por **dobras sucessivas** (ou seja, multiplicações por potências de 2), notamos uma regularidade notável:

- A quantidade de **descidas** (operações de divisão por 2) **aumenta de forma linear**;
- A quantidade de **subidas** (operações de $3x + 1$) **permanece constante**.

---

### Exemplo com o número 3

| Número | Descidas | Subidas |
|--------|----------|---------|
| 3      | 5        | 2       |
| 6      | 6        | 2       |
| 12     | 7        | 2       |
| 24     | 8        | 2       |
| 48     | 9        | 2       |
| 96     | 10       | 2       |

Neste caso, os números analisados foram obtidos por:

$
\text{número base} \times 2^k \quad \text{com } k = 0, 1, 2, \dots
$

---

### Análise da Progressão

Observamos que:

- A cada multiplicação por 2, o número total de **passos aumenta em exatamente 1 descida**;
- O número de **subidas permanece o mesmo**, refletindo a mesma trajetória lógica do número base.

Este fenômeno foi observado também em outros conjuntos de números, como:

| Número | Descidas | Subidas |
|--------|----------|---------|
| 7      | 11       | 5       |
| 14     | 12       | 5       |
| 28     | 13       | 5       |
| 56     | 14       | 5       |
| 112    | 15       | 5       |


E ainda:

| Número | Descidas | Subidas |
|--------|----------|---------|
| 27     | 70       | 41      |
| 54     | 71       | 41      |
| 108    | 72       | 41      |
| 216    | 73       | 41      |

---

### Padrão Descoberto

A quantidade de **descidas** segue uma:

$
\textbf{Progressão Aritmética com razão 1}
$

Enquanto a quantidade de **subidas permanece inalterada**.

---

### Conclusão

Esse comportamento revela um padrão estrutural recorrente na sequência de Collatz: ao dobrar um número, sua trajetória mantém a lógica da sequência anterior, com um único passo adicional de descida. Isso evidencia que a **estrutura da sequência é preservada nas duplicações**, reforçando a ideia de que a Collatz não é totalmente aleatória, mas sim **marcada por simetrias e progressões internas regulares**.

> Esse padrão ainda merece ser mais aprofundado, não é certo que funciona pra todos os casos, mas acredito que as outras padrões podem ajudar a provar esse fenomêno.