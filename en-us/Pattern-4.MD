# Pattern nº 4

## Gaussian Flux: There is a pattern in the distance between Fermat Collapses

### Gauss Table

| Index (n) | Odd (x) | 3x + 1 | Factorization     | Type   |
|------------|-----------|--------|---------------|--------|
| 0          | 1         | 4      | $2^2$       | Fermat |
| 2          | 5         | 16     | $2^4$       | Fermat |
| 10         | 21        | 64     | $2^6$       | Fermat |
| 42         | 85        | 256    | $2^8$       | Fermat |
| 170        | 341       | 1024   | $2^{10}$    | Fermat |

By observing the indexes of these terms and calculating the differences between them, we have:

- $2 - 0 = 2 \implies 2^1$
- $10 - 2 = 8 \implies 2^3$
- $42 - 10 = 32 \implies 2^5$
- $170 - 42 = 128 \implies 2^7$

Note that the distances between the indices form **odd** powers of 2 and are growing steadily.

Therefore, the next Fermat Collapse will be given by:

$2^9 + 170 \implies 512 + 170 = 682$

### Formula for the nth Fermat Collapse

The position (index) of the nth Fermat Collapse can be determined by the formula:

$f(x) = \sum_{n=0}^{x} 2^{2n+1} \implies f(x) = \frac{2^{2x+3} - 2}{3}$

### Examples of application of the formula:

Let's calculate the rate of the first **Fermat Collapses** using the formula:

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

> The pattern of distances between Fermat Collapses follows odd powers of 2 ($2^1, 2^3, 2^5, 2^7$, etc.).
