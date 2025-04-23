# Pattern nº 5

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

### Conclusion

> The spacing pattern between fixed exponents in Fermat factorizations follows a predictable periodicity: the spacing between the exponents of $2^x$ is $2^x$.