# Curiosity nº 5

## Gaussian Flux: There is a pattern in the distance between exponents in Fermat Factorization

### Gauss Table — Factorization with Fixed Exponent $2^2$

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|--------|---------------|--------|
| 0          | 1         | 4      | $2^2$     | Fermat |
| 4          | 9         | 28     | $2^2 \times 7$ | Fermat |
| 8          | 17        | 52     | $2^2 \times 13$ | Fermat |
| 12         | 25        | 76     | $2^2 \times 19$ | Fermat |

When observing the differences between the indexes:

- $4 - 0 = 4 \implies 2^2$
- $8 - 4 = 4 \implies 2^2$
- $12 - 8 = 4 \implies 2^2$

Note that the **spacing** between indexes is always $2^2$, that is, **4**.

---

### Gauss Table — Factorization with Fixed Exponent $2^3$

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|--------|---------------|--------|
| 6          | 13        | 40     | $2^3 \times 5$  | Fermat |
| 14         | 29        | 88     | $2^3 \times 11$ | Fermat |
| 22         | 45        | 136    | $2^3 \times 17$ | Fermat |
| 30         | 61        | 184    | $2^3 \times 23$ | Fermat |

When observing the differences between the indexes:

- $14 - 6 = 8 \implies 2^3$
- $22 - 14 = 8 \implies 2^3$
- $30 - 22 = 8 \implies 2^3$

Here, the **spacing** between indexes is always $2^3$, i.e. **8**.

---

### Gauss Table — Factorization with Fixed Exponent $2^4$

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|--------|---------------|--------|
| 2          | 5         | 16     | $2^4$     | Fermat |
| 18         | 37        | 112    | $2^4 \times 7$ | Fermat |
| 34         | 69        | 208    | $2^4 \times 13$ | Fermat |
| 50         | 101       | 304    | $2^4 \times 19$ | Fermat |

When observing the differences between the indexes:

- $18 - 2 = 16 \implies 2^4$
- $34 - 18 = 16 \implies 2^4$
- $50 - 34 = 16 \implies 2^4$

Here, the **spacing** between indexes is always $2^4$, i.e. **16**.

---

### General Standard

Each group of fixed-exponent factorizations of 2 ($2^2, 2^3, 2^4, \dots$) appears **periodically** along the Collatz sequence, and the spacing between their indices is **exactly equal to the value of the corresponding power**.

That is, we can express the spacing between the exponents as:

$$
f(x) = 2^x
$$

### How to predict the position of any power?

We know that the **first exponent of each group** (the first number that factors as $2^x$) always appears in a number known as the **Fermat Collapse**. After that, the periodicity of the exponents follows a predictable sequence.

#### The position of the first exponent (Fermat collapse) can be modeled by:

$$
\boxed{
CF(x) =
\begin{cases}
\displaystyle CF_{par}(x) = \frac{2^{2x+3} - 2}{3}, & \text{se } x \text{ é par} \\\\
\displaystyle \frac{CF_{par}(x) + CF_{par}(x+1)}{2}, & \text{se } x \text{ é ímpar}
\end{cases}
}
$$

#### To calculate the position of the nth fixed exponent within the group, we use the formula:

$$
\boxed{f(x, n) = CF(x) + n \times 2^x}
$$

Where:
- $CF(x)$ is the position of the first exponent in the group $x$,,
- $n$ is the index of the desired fixed exponent within the group,
- $2^x$ is the spacing between the exponents in the group.

---

### Calculation Example

Let's calculate the position of some exponents of $2^3$ (factorization with fixed exponent $2^3$):

- The first exponent of the group $2^3$ is in $CF(3)$.
- Using Fermat's Collapse Formula:
  $$
  CF(3) = \frac{2^{2(3) + 3} - 2}{3} = \frac{2^9 - 2}{3} = \frac{512 - 2}{3} = \frac{510}{3} = 170
  $$
  Therefore, the first exponent of $2^3$ is at $170$.

- O segundo expoente de $2^3$ estará em:
  $$
  f(3, 1) = 170 + 1 \times 2^3 = 170 + 8 = 178
  $$

- O terceiro expoente de $2^3$ estará em:
  $$
  f(3, 2) = 170 + 2 \times 2^3 = 170 + 16 = 186
  $$

---

### Conclusion

> The spacing pattern between fixed exponents in Fermat factorizations follows a predictable periodicity: the spacing between the exponents of $2^x$ is $2^x$.