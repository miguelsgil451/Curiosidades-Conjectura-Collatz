# Curiosity nº 6

## Gaussian Flux: Relation to Euler Number Factorization and Odd Index

By looking at the terms of the Collatz sequence, particularly those that result in an **Euler** factorization (i.e., of the form $2 \times p$, with $p$ being an odd number), we can see an interesting pattern in the differences between the indices $n$ of the odd numbers and the indices of the next terms with **Euler** or **Fermat** factorization. The difference between the indices follows an increasing arithmetic progression.

### Gaussian table

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|------------|-----------------|--------|
| 1          | 3         | 10         | $2 \times 5$  | Euler  |
| 2          | 5         | 16         | $2^4$         | Fermat |
| 3          | 7         | 22         | $2 \times 11$ | Euler  |
| 5          | 11        | 34         | $2 \times 17$ | Euler  |
| 8          | 17        | 52         | $2^2 \times 13$ | Fermat |
| 11         | 23        | 70         | $2 \times 35$ | Euler  |

### Observing the Differences between the Indices:

Let's compare the difference between the indices $n$ of the odd numbers and the indices of the next term with Fermat or Euler factorization:

- $2 - 1 = 1$
- $5 - 3 = 2$
- $8 - 5 = 3$
- $11 - 7 = 4$

That is, the difference between the indices follows an increasing arithmetic progression with a constant difference of 1 between consecutive values. This arithmetic progression can be expressed as:

$$
\Delta n = n_{i+1} - n_i = i \quad \text{where } i \text{ is the index of the sequence}
$$

### Formalização

The arithmetic progression that describes the differences between the indices of odd numbers that result in **Euler** or **Fermat** type factorizations can be modeled as:

$$
\Delta n = 1, 2, 3, 4, \dots
$$

Where the difference between each consecutive index increases steadily.

For the $i$-th index, the difference between the current index $n_i$ and the next index $n_{i+1}$ will be:

$$
n_{i+1} = n_i + i
$$

For example:
- For index $n_1 = 1$, the difference to the next index $n_2 = 2$ is $1$.
- For index $n_2 = 3$, the difference to the next index $n_3 = 5$ is $2$.
- And so on.

### Conclusion

> This pattern reveals a regular structure in the Collatz sequence, which can be useful for predicting the behavior of odd numbers that generate **Euler** or **Fermat** type factorizations.