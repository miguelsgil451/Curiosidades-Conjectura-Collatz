# Curiosidade nº 2

## Todos os Números de Euler são congruentes a 2 módulo 4

Como definido anteriormente, um **Número de Euler** é um número **par** que, ao ser dividido por 2, resulta em um número **ímpar**. Isso implica que ele é o dobro de um número ímpar, ou seja:

$$
n = 2 \times (2x + 1)
$$

Desenvolvendo a expressão:

$$
n = 4x + 2
$$

Logo, todos os Números de Euler podem ser expressos pela função $f(x) = 4x + 2$, com $x \in \mathbb{N}$. Isso significa que todos eles são **congruentes a 2 módulo 4**:

$$
n \equiv 2 \pmod{4}
$$

### Exemplos:

- $x = 0 \Rightarrow f(0) = 4 \times 0 + 2 = 2$
- $x = 1 \Rightarrow f(1) = 4 \times 1 + 2 = 6$
- $x = 2 \Rightarrow f(2) = 4 \times 2 + 2 = 10$
- $x = 3 \Rightarrow f(3) = 4 \times 3 + 2 = 14$

### Conclusão:

> Todos os **Números de Euler** pertencem à classe de congruência $2 \pmod{4}$, ou seja, são da forma $4x + 2$. O número **2**, portanto, não é uma exceção — ele é o caso-base da fórmula.