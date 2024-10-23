# Pass-by-Reference

Repeat question Pass-by-Value (Lab 11) but also pass the address of the variable `total` to the function `sum`. 

```
void sum(int a, int b, int c, int *total);
```

The function sum()  should assign the summation value of three numbers to total. 


Noted that the function sum()  will not return total to the main(). At last step, print the sum of three numbers from main().

**Note**:

- You **MUST** use the "pass-by-reference" technique to pass the addresses of variables into the `sum` function. Otherwise, you will get a ZERO score.

**Case 1**
Sample inputs:
```
1
2
3
```
Sample outputs:
```
6
```
**Case 2**
Sample inputs:
```
4
4
4
```
Sample outputs:
```
12
```
