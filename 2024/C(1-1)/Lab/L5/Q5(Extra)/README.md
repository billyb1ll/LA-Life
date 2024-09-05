# Print Pyramid Pattern

Write a program to print a pyramid pattern of height `h`.
In particular, the program first receives the height of the pyramid `h`. It then prints out the pyramid pattern.
Suppose `h=5`, the program will print out the following pattern:

```
1 0 0 0 0 
1 1 0 0 0 
1 1 1 0 0 
1 1 1 1 0 
1 1 1 1 1    // this top of the pyramid
1 1 1 1 0 
1 1 1 0 0 
1 1 0 0 0 
1 0 0 0 0
```

**Hint**
* Try to decompose this into two parts:
* First, print the *upper* part of the pyramid
```
1 0 0 0 0 
1 1 0 0 0 
1 1 1 0 0 
1 1 1 1 0 
1 1 1 1 1
```
* Then, print the *lower* part of the pyramid
```
1 1 1 1 0 
1 1 1 0 0 
1 1 0 0 0 
1 0 0 0 0
  ```

<hr>

**Case 1**

Sample input:
```
4
```
Sample output:
```
1 0 0 0 
1 1 0 0 
1 1 1 0 
1 1 1 1 
1 1 1 0 
1 1 0 0 
1 0 0 0 
```

**Case 2**

Sample input:
```
2
```
Sample output:
```
1 0 
1 1 
1 0 
```

**Case 3**

Sample input:
```
1
```
Sample output:
```
1 
```
