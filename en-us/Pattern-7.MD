# Pattern nº 7

## Gaussian Flux: The Relationship Between the Power of 2 Exponent and the Odd Factor Growth

When analyzing the terms of the Collatz sequence that result in factorizations of the **Fermat** type — that is, of the form:

$3x + 1 = 2^e \times \text{ímpar}$

It can be seen that the associated **odd factors** follow an **increasing arithmetic progression**, with a constant difference that depends directly on the exponent $e$ of the power of 2.

---

### For $2^2$:

| Index (n) | $3x + 1$ | Factorization | Odd factor |
|------------|--------------|------------------|--------------|
| 0          | 4            | $2^2$         | 1            |
| 4          | 28           | $2^2 \times 7$  | 7            |
| 8          | 52           | $2^2 \times 13$ | 13           |
| 12         | 76           | $2^2 \times 19$ | 19           |

→ Odd Factors: $1, 7, 13, 19$

→ Differences:  
- $7 - 1 = 6$  
- $13 - 7 = 6$  
- $19 - 13 = 6$

---

### For $2^3$:

| Index (n) | $3x + 1$ | Factorization         | Odd Factor |
|------------|--------------|--------------------|--------------|
| 6          | 40           | $2^3 \times 5$  | 5            |
| 14         | 88           | $2^3 \times 11$ | 11           |
| 22         | 136          | $2^3 \times 17$ | 17           |
| 30         | 184          | $2^3 \times 23$ | 23           |

→ Odd Factors: $5, 11, 17, 23$

→ Differences:
- $11 - 5 = 6$
- $17 - 11 = 6$
- $23 - 17 = 6$

---

### For $2^4$:

| Index (n) | $3x + 1$ | Factorization          | Odd Factor |
|------------|--------------|----------------------|--------------|
| 2          | 16           | $2^4$             | 1            |
| 18         | 112          | $2^4 \times 7$     | 7            |
| 34         | 208          | $2^4 \times 13$    | 13           |
| 50         | 304          | $2^4 \times 19$    | 19           |

→ Odd Factors: $1, 7, 13, 19$

→ Differences:
- $7 - 1 = 6$
- $13 - 7 = 6$
- $19 - 13 = 6$

---

### Formalization

Given a term of the Collatz sequence of the form:

$3x + 1 = 2^e \times k$

where $k$ is an odd number, then the factors $k$ follow an **arithmetic progression** with constant ratio $r = 6$:

$k_{i+1} = k_i + 6$

I.e:

$\text{For a fixed exponent } and, \text{ the associated odd factors increase by 6.}$

---

### Conclusão

This regularity demonstrates a hidden symmetry in the structure of the Collatz sequence. The constant difference of **6** between the odd factors for the same power of 2 suggests that the **exponent $e$** determines a **specific class of arithmetic progression** in the universe of **Fermat** factorizations.