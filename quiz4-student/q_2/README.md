# One name to rule them all

## Background

Converting a currency is straightforward if you know the exchange rate. For example

- 20.0 THB is converted to 4.20 RMB using the exchange rate of 0.21.
- 42.0 RMB is converted to 197.4 THB using the exchange rate of 4.70.

In the `main.c`, we defined the exchange rates for you (`THBTORMB` and `RMBTOTHB`.)
Thus, write a program to convert the currency is a piece of cake.

*To make sure you have **fun**, we introduce a twist...*

## Instruction

Write a program that receives an input character from the command line:

- `r` means converting from THB to RMB
- `t` means converting from RMB to THB

Then the program receives a floating-point number from the command lines, and print the converted value.

You can only get full score by **USING ONLY VARIABLES NAMED `x`,** (6 points). In other words, you can declare as many variables you need, but all of them must be named `x`. *Hint*: Variable Scopes.

**DO NOT DEFINE A NEW CONSTANT.**

## Example Cases

### Case 1

Inputs:

```plaintext
r
20.0
```

Expected outputs (ends with a new line):

```plaintext
Converted amount: 4.20 RMB

```

### Case 2

Inputs:

```plaintext
0
```

Expected outputs (ends with a new line):

```plaintext
Invalid conversion type.

```

### Case 3

Inputs:

```plaintext
t
42.2
```

Expected outputs (ends with a new line):

```plaintext
Converted amount: 198.34 THB

```

## Submission

Submit your code to PC2
