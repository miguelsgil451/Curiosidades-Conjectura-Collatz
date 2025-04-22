# Curiosity nº 2

## All Euler numbers are congruent to 2 modulo 4

As defined above, an **Euler Number** is an **even** number that, when divided by 2, results in an **odd** number. This implies that it is twice an odd number, that is:

$$
n = 2 \times (2x + 1)
$$

Developing the expression:

$$
n = 4x + 2
$$

Therefore, all Euler numbers can be expressed by the function $f(x) = 4x + 2$, with $x \in \mathbb{N}$. This means that they are all **congruent to 2 modulo 4**:

$$
n \equiv 2 \pmod{4}
$$

### Examples:

- $x = 0 \Rightarrow f(0) = 4 \times 0 + 2 = 2$
- $x = 1 \Rightarrow f(1) = 4 \times 1 + 2 = 6$
- $x = 2 \Rightarrow f(2) = 4 \times 2 + 2 = 10$
- $x = 3 \Rightarrow f(3) = 4 \times 3 + 2 = 14$

### Conclusion:

> All **Euler Numbers** belong to the congruence class $2 \pmod{4}$, that is, they are of the form $4x + 2$.