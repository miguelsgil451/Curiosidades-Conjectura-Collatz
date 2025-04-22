# Pattern nº 8

## Gaussian Flux: The Relationship between the Odd Factor of the Fermat Number and its Index as a Term of the Sequence

In the analysis of the Collatz sequence, a pattern emerges when observing **Fermat-type numbers**, that is, terms that are expressed as:

$
3x + 1 = 2^k \times \text{ímpar}
$

In these cases, the odd factor does not arise arbitrarily. When we compare:

- the **index $n$** at which the Fermat number appears in the sequence, with
- the **index $m$** at which the odd factor (the value multiplied by $2^k$) appears **as number $x$** in the sequence,

we notice an **arithmetic growth pattern in the difference $n - m$**.

---

### Gaussian Table

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|--------------|------------------|--------|
| 3          | 7         | 22           | $2 \times 11$      | Euler  |
| 4          | 9         | 28           | $2^2 \times 7$     | Fermat |
| 6          | 13        | 40           | $2^3 \times 5$     | Fermat |
| 8          | 17        | 52           | $2^2 \times 13$    | Fermat |
| 9          | 19        | 58           | $2 \times 29$      | Euler  |
| 12         | 25        | 76           | $2^2 \times 19$    | Fermat |
| 16         | 33        | 100          | $2^2 \times 25$    | Fermat |

---

### Analysis of Differences

We identify when an **odd factor** of a Fermat number also appears earlier in the sequence as the value $x$. We then calculate:

$
\Delta = \text{Fermat Index} - \text{Odd factor index}
$

| Odd Factor | Factor Index | Fermat Index | Difference ($\Delta$) |
|-------------|------------------|------------------|---------------------------|
| 7           | 3                | 4                | 1                         |
| 13          | 6                | 8                | 2                         |
| 19          | 9                | 12               | 3                         |
| 25          | 12               | 16               | 4                         |

→ Difference between indexes: **1, 2, 3, 4...**

---

### Pattern Discovered

A diferença entre os índices forma uma:

$
\textbf{Arithmetic Progression with ratio 1}
$

This pattern reveals that:

> The **odd factors** of Fermat-type numbers **reappear in the sequence as $x$** values ​​with **increasing and ordered** index differences.

---

### Conclusion

This regularity demonstrates that the odd factors of Fermat numbers in the Collatz sequence do not appear randomly. They follow a predictable order:

- first appear as values ​​of $x$, and reappear multiplied by powers of 2 in later positions, with **differences between indexes that grow by 1**.