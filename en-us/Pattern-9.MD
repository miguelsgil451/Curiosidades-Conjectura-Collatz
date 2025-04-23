# Pattern #9

## Progression in the Number of Steps: The Relationship Between Doublings of a Number and the Number of Up and Down Operations

In the in-depth analysis of the Collatz sequence, a new intriguing pattern emerges when observing the **number of up and down operations** that occur during the trajectory of certain numbers until they reach 1.

When we select any number and analyze its multiples obtained by **successive doublings** (i.e., multiplying by powers of 2), we notice a remarkable regularity:

- The number of **downs** (division by 2 operations) **increases linearly**;
- The number of **ups** (operations of $3x + 1$) **remains constant**.

---

### Example with the number 3

| Number | Downs | Ups |
|--------|-------|-----|
| 3      | 5     | 2   |
| 6      | 6     | 2   |
| 12     | 7     | 2   |
| 24     | 8     | 2   |
| 48     | 9     | 2   |
| 96     | 10    | 2   |

In this case, the numbers analyzed were obtained by:

$
\text{base number} \times 2^k \quad \text{with } k = 0, 1, 2, \dots
$

---

### Analysis of the Progression

We observe that:

- With each multiplication by 2, the total number of **steps increases by exactly 1 down**;
- The number of **ups remains the same**, reflecting the same logical trajectory of the base number.

This phenomenon was also observed in other sets of numbers, such as:

| Number | Downs | Ups |
|--------|-------|-----|
| 7      | 11    | 5   |
| 14     | 12    | 5   |
| 28     | 13    | 5   |
| 56     | 14    | 5   |
| 112    | 15    | 5   |

And also:

| Number | Downs | Ups |
|--------|-------|-----|
| 27     | 70    | 41  |
| 54     | 71    | 41  |
| 108    | 72    | 41  |
| 216    | 73    | 41  |

---

### Discovered Pattern

The number of **downs** follows a:

$
\textbf{Arithmetic Progression with a difference of 1}
$

While the number of **ups remains unchanged**.

---

### Conclusion

This behavior reveals a recurring structural pattern in the Collatz sequence: when doubling a number, its trajectory maintains the logic of the previous sequence, with a single additional down step. This highlights that the **structure of the sequence is preserved in the doublings**, reinforcing the idea that the Collatz sequence is not entirely random but rather **marked by symmetries and regular internal progressions**.

> This pattern still deserves further exploration, it is not certain that it works for all cases, but I believe the other patterns can help prove this phenomenon.