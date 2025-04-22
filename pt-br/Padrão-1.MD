# Padrão nº 1

## Todo Número de Fermat é divisível por 4

De acordo com a definição adotada, um **Número de Fermat** é um número par que, ao ser dividido por 2, ainda resulta em um número par. Isso implica que ele é divisível por 2 **duas vezes consecutivas**, sem produzir um número ímpar.

Em termos matemáticos:

$$
n \equiv 0 \pmod{4} \quad \Rightarrow \quad 2 \mid \left( \frac{n}{2} \right)
$$

Portanto, todo Número de Fermat é **divisível por 4**, ou seja, existe algum $x \in \mathbb{N}$ tal que:

$$
n = 4x
$$

---

### Exemplos:

| x | n = 4x |
|--------|--------------|
| 0      | 0            |
| 1      | 4            |
| 2      | 8            |
| 3      | 12           |

---

### Conclusão

> **Todo Número de Fermat é divisível por 4**, pois admite divisão por 2 duas vezes consecutivas sem gerar um número ímpar.