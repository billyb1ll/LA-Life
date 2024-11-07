# Finding the Parity of a number

## Background

Given an integer `x`. The task is to write a program to find the parity of the
given number. The parity is computed from the sum of the binary bits in of a number.
If the sum is odd, then the parity of a number is odd, otherwise even.

For example,

- `13` has a binary representation as `1101`, so it has **odd parity**.
- `5` has a binary representation as `101`, so it as **even parity**.

To help you compute this, there are two existing functions that you can use:

- `bit_at_nth(int x, int n)` returns the bit (`0` or `1`) at a binary position such as
  - `bit_at_nth(5, 0)` returns `1`
  - `bit_at_nth(5, 1)` returns `0`.
- `num_bits(int x)` returns the number of bits of the binary representation of x such as
  - `num_bits(5)` return `3`.
  - `num_bits(13)` return `4`.

## Instruction

Please define a function `parity_bit` that takes one integer as its argument and return `0` if the argument has even parity and `1` if the argument has odd parity. Your function must print `"[DEBUG]: parity_bit(...)\n"` at the beginning of the function.

Look for `TODO` in the `main.c`.

## Example Cases

### Case 1

Inputs:

```plaintext
6
```

Expected outputs (ends with a new line):

```plaintext
[DEBUG]: main(...)
Input a number: 6
[DEBUG]: parity_bit(...)
[DEBUG]: num_bits(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
Even Parity

```

### Case 2

Inputs:

```plaintext
755
```

Expected outputs (ends with a new line):

```plaintext
[DEBUG]: main(...)
Input a number: 755
[DEBUG]: parity_bit(...)
[DEBUG]: num_bits(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
[DEBUG]: bit_at_nth(...)
Odd Parity

```

### Case 3

Inputs:

```plaintext
1
```

Expected outputs (ends with a new line):

```plaintext
[DEBUG]: main(...)
Input a number: 1
[DEBUG]: parity_bit(...)
[DEBUG]: num_bits(...)
[DEBUG]: bit_at_nth(...)
Odd Parity

```

## Submission

Submit your code to PC2
