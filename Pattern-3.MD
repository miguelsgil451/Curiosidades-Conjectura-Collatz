# Pattern nº 3

## Gaussian flux: sometimes Fermat, sometimes Euler

Given the flow defined by the function:

$$
f(x) = 6x + 4
$$

We can analyze the behavior of the results according to the parity of $x$. The following table presents the values ​​obtained and their classification as **Fermat Number** (F) or **Euler Number** (E):

### Gauss Table

| $x$ | $f(x) = 6x + 4$ | Type        | Factorization     |
|------:|------------------:|-------------|----------------|
| 0     | 4                | Fermat      | $2^2$        |
| 1     | 10               | Euler       | $2 \times 5$ |
| 2     | 16               | Fermat      | $2^4$        |
| 3     | 22               | Euler       | $2 \times 11$|
| 4     | 28               | Fermat      | $2^2 \times 7$|
| 5     | 34               | Euler       | $2 \times 17$|
| 6     | 40               | Fermat      | $2^3 \times 5$|
| 7     | 46               | Euler       | $2 \times 23$|
| 8     | 52               | Fermat      | $2^2 \times 13$|
| 9     | 58               | Euler       | $2 \times 29$|
| 10    | 64               | Fermat      | $2^6$        |
| 11    | 70               | Euler       | $2 \times 35$|

### Observação

The sequence switches seamlessly between **Fermat (F)** and **Euler (E)**. This is because of the structure of the function:

$$
f(x) = 6x + 4
$$

We know that:
- $6x$ is always even, because 6 is even.
- Adding 4 to an even number, the result remains even.

Now, let us consider the parity of $x$:

### Case 1: $x$ pair
If $x$ is even, then $x = 2k$ for some $k \in \mathbb{N}$. Substituting:

$$
f(x) = 6(2k) + 4 = 12k + 4
$$

$$
f(x) = 4(3k + 1)
$$

That is, $f(x)$ is divisible by 4 → it is a **Fermat Number**.

---

### Case 2: $x$ odd
If $x$ is odd, then $x = 2k + 1$. Substituting:

$$
f(x) = 6(2k + 1) + 4 = 12k + 6 + 4 = 12k + 10
$$

$$
f(x) = 2(6k + 5)
$$

Since $6k + 5$ is odd, then $f(x)$ is **even, but not divisible by 4**, which characterizes an **Euler Number**.

---

### Conclusão

> The Gaussian Flux switches seamlessly between **Fermat Numbers** and **Euler Numbers** because the parity of $x$ directly determines the type of the number:
>
> - $x$ par → $f(x) \equiv 0 \pmod{4}$ → **Gauss-Fermat**
> - $x$ ímpar → $f(x) \equiv 2 \pmod{4}$ → **Gauss-Euler**