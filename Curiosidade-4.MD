# Curiosidade nº 4

## Fluxo de Gauss: Há um padrão na distância entre os Colapsos de Fermat

### Tabela de Gil

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

### Fórmula para o enésimo Colapso de Fermat

A posição (índice) do enésimo Colapso de Fermat pode ser determinada pela fórmula:

$
f(x) = \sum_{n=0}^{x} 2^{2n+1} \implies f(x) = \frac{2^{2x+3} - 2}{3}
$

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

### Conclusão

> O padrão das distâncias entre os Colapsos de Fermat segue potências de 2 ímpares ($2^1, 2^3, 2^5, 2^7$, etc.).