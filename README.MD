# Patterns in the Collatz Conjecture

**Autor**: <a href="https://mgil-portfolio.netlify.app/" target="_blank">Miguel Gil</a> <br>
**Site 1**: <a href="https://patterns-collatz-conjecture.netlify.app/gauss_table.html" target="_blank">Gaussian table</a>
**Site 2**: <a href="https://patterns-collatz-conjecture.netlify.app/collatz_graphic.html" target="_blank">Collatz Graphic</a>

This article explores some interesting patterns linked to the famous Collatz Conjecture, focusing on understanding how certain numbers behave and organize themselves within this sequence. The idea is to observe structural and behavioral patterns that appear when we analyze specific parts of the sequence.

Before diving into the analysis and experiments, let's define some important concepts that will serve as a basis for the studies presented throughout the text.

---

## Auxiliary Definitions

- **Parity of zero**: Define 0 as an **even** number.
- **Even number generating function**: $f(x) = 2x$, with $x \in \mathbb{N}$.
- **Odd number generating function**: $f(x) = 2x + 1$, with $x \in \mathbb{N}$.

---

## Proposed Definitions

As definições abaixo classificam certos tipos de números que aparecem quando estudamos a Conjectura de Collatz. Os nomes são apenas convenções criadas para facilitar a análise dos padrões.

- **Fermat's Number (F)**: This is an **even** number that remains **even even when divided by 2 once**. In other words, it can be divided by 2 **two or more times** before becoming odd. Example: 16 → 8 → 4 → 2 → 1 (until it reaches the odd 1, it has been divided by 2 several times).

- **Fermat's Collapse Number (CF)**: This is a special case of Fermat's Number. Here, the number is an **exact power of 2** — like 2, 4, 8, 16, 32, etc. In other words, you can write it as $2^k$.

- **Euler's Number (E)**: This is an **even** number, but it **becomes odd the first time it is divided by 2**. For example, 6 → 3 (3 is odd). This happens because the number can only be divided by 2 once before it goes out of parity.

- **Gauss-Fermat number (GF)**: This is an **odd** number that, when inserted into the formula $3x + 1$, results in a **Fermat number**.

- **Gauss-Euler number (GE)**: This is an **odd** number that, when applied to $3x + 1$, becomes an **Euler number**.

- **Gauss flux (FG)**: This is a function that takes any natural number $n$, transforms it into an odd number with $x = 2n + 1$, and then applies the transformation of the Collatz conjecture: $3x + 1$. Putting it all together, we get:
$$
FG(n) = 6n + 4
$$

---

## Gauss Table (GT)

The Gauss Table organizes the elements of the Gauss Flow in a systematic way, associating the entry (index) with its respective odd number, the value obtained by the transformation $3x + 1$, the factorization of this value (if it is even), and its classification according to the previous categories. It will be used as a basis for understanding the patterns in the Conjecture.


| **Column** | **Description** |
|-------------------|--------------------------------------------------------------------------------|
| **Index (n)** | Natural number used as input in the function $x = 2n + 1$, generating an odd number. |
| **Odd (x)** | Corresponding odd number, obtained by the odd generating function. |
| **$3x + 1$** | Result of the transformation applied to the odd number, associated with the dynamics of the Collatz Conjecture. |
| **Factorization** | Decomposition of the even number resulting from the operation $3x + 1$, highlighting powers of two. |
| **Type** | Classification according to the definitions: <br> 🔹 **F** for Fermat Numbers <br> 🔸 **E** for Euler Numbers |

---

## Contribution

This article is open to suggestions, corrections, and improvements. If you found something that could be improved, had a new idea related to the Collatz Conjecture patterns, or just want to talk about the topic, feel free to contribute!

You can open an issue, submit a pull request, or contact us directly. Any help is welcome to make this study more complete and accessible.