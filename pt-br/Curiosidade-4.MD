# Curiosidade nº 4

## Fluxo de Gauss: Há um padrão na distância entre os Colapsos de Fermat

### Tabela de Gauss

| Índice (n) | Ímpar (x) | 3x + 1 | Fatoração     | Tipo   |
|------------|-----------|--------|---------------|--------|
| 0          | 1         | 4      | $2^2$       | Fermat |
| 2          | 5         | 16     | $2^4$       | Fermat |
| 10         | 21        | 64     | $2^6$       | Fermat |
| 42         | 85        | 256    | $2^8$       | Fermat |
| 170        | 341       | 1024   | $2^{10}$    | Fermat |

Ao observar os índices desses termos e calcular as diferenças entre eles, temos:

- $2 - 0 = 2 \implies 2^1$
- $10 - 2 = 8 \implies 2^3$
- $42 - 10 = 32 \implies 2^5$
- $170 - 42 = 128 \implies 2^7$

Perceba que as distâncias entre os índices formam potências de 2 **ímpares** e estão crescendo de maneira constante.

Portanto, o próximo Colapso de Fermat será dado por:

$
2^9 + 170 \implies 512 + 170 = 682
$

### Fórmula para o enésimo Colapso de Fermat de Expoente Par

A posição (índice) do enésimo Colapso de Fermat pode ser determinada pela fórmula:

$
f(x) = \sum_{n=0}^{x} 2^{2n+1} \implies f(x) = \frac{2^{2x+3} - 2}{3}
$

surge da observação de que os **índices dos Colapsos de Fermat** não crescem de forma aleatória — eles seguem uma **progressão acumulativa** baseada em **potências de 2 ímpares**.

Vamos entender isso passo a passo:

1. **As distâncias entre os colapsos formam a sequência:**

$$
2^1,\ 2^3,\ 2^5,\ 2^7,\ \dots,\ 2^{2n+1}
$$

2. Se somarmos essas potências, teremos a posição do próximo colapso. Por exemplo:

- O segundo colapso acontece **2 unidades** após o primeiro: $2^1$
- O terceiro colapso acontece **8 unidades** após o segundo: $2^3$
- O quarto colapso acontece **32 unidades** após o terceiro: $2^5$
- E assim por diante.

3. Isso nos leva à fórmula geral da **posição** do enésimo colapso:

$$
f(x) = 2^1 + 2^3 + 2^5 + \dots + 2^{2x+1}
$$

Essa soma é uma **progressão geométrica de potências de 2**, com expoentes ímpares.

4. E essa progressão tem uma fórmula fechada que simplifica todo o cálculo:

$$
f(x) = \sum_{n=0}^{x} 2^{2n+1} = \frac{2^{2x+3} - 2}{3}
$$

**OBS.: Perceba que o parâmetro é o índice do número ímpar que você quer.**

Essa fórmula permite calcular diretamente o índice do colapso de número $x+1$ sem precisar somar manualmente todas as potências anteriores.

### Exemplos de aplicação da fórmula:

Vamos calcular o índice dos primeiros **Colapsos de Fermat** usando a fórmula:

- Para $f(0)$:
  $f(0) = \frac{2^{2(0) + 3} - 2}{3} = \frac{2^3 - 2}{3} = \frac{8 - 2}{3} = \frac{6}{3} = 2$

- Para $f(1)$:
  $f(1) = \frac{2^{2(1) + 3} - 2}{3} = \frac{2^5 - 2}{3} = \frac{32 - 2}{3} = \frac{30}{3} = 10$

- Para $f(2)$:
  $f(2) = \frac{2^{2(2) + 3} - 2}{3} = \frac{2^7 - 2}{3} = \frac{128 - 2}{3} = \frac{126}{3} = 42$

- Para $f(3)$:
  $f(3) = \frac{2^{2(3) + 3} - 2}{3} = \frac{2^9 - 2}{3} = \frac{512 - 2}{3} = \frac{510}{3} = 170$

- Para $f(4)$:
  $f(4) = \frac{2^{2(4) + 3} - 2}{3} = \frac{2^{11} - 2}{3} = \frac{2048 - 2}{3} = \frac{2046}{3} = 682$

- Para $f(5)$:
  $f(5) = \frac{2^{2(5) + 3} - 2}{3} = \frac{2^{13} - 2}{3} = \frac{8192 - 2}{3} = \frac{8190}{3} = 2730$


### Fórmula para o enésimo Colapso de Fermat de Expoente Ímpar

A posição (índice) do enésimo Colapso de Fermat com **expoente ímpar** também pode ser determinada a partir da média entre dois colapsos pares consecutivos:

$$
f_{\text{ímpar}}(x) = \frac{f(x) + f(x + 1)}{2}
$$

**OBS.: Perceba que o parâmetro é o índice do número ímpar que você quer.**

Isso porque o **primeiro aparecimento** de um expoente ímpar ocorre exatamente **entre dois colapsos de Fermat consecutivos**, como mostra o exemplo abaixo:

| Expoente | Índice de Aparição |
|----------|--------------------|
| 6        | 10                 |
| **5**    | **26**             |
| 8        | 42                 |

Repare que:
$$
\frac{10 + 42}{2} = 26
$$

Ou seja, o expoente **ímpar 5** surge exatamente **no meio** entre os colapsos de expoente par 6 e 8.

### Conclusão

> O padrão das distâncias entre os Colapsos de Fermat segue potências de 2 ímpares ($2^1, 2^3, 2^5, 2^7$, etc.), e os expoentes ímpares surgem exatamente entre os colapsos pares consecutivos, o que nos permite prever ambos com fórmulas bem definidas.