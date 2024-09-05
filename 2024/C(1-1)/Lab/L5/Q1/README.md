# Print Rectangle

Write a program to print a rectangle given a width (`w`), a height (`h`) using a specified character (`c`). 

The program should receive a width (`w`), a height (`h`) and a character (`c`) in order.

Suppose a user inputs `w=6`, `h=4` and `c='A'` as follows:
```
6 4 A
```
The program then prints a rectangle as follows:
```
A A A A A A 
A A A A A A 
A A A A A A 
A A A A A A
```

**Note**
* You MUST use a repetition statement to solve this problem.
* If you encounter the buffering problem when running `scanf("%c", &c);`, try to add a space (`" "`) before or after `%c` (e.g., `scanf(" %c", &c);`).

<hr>

**Case 1**

Sample input:
```
3 5 k
```
Sample output:
```
k k k 
k k k 
k k k 
k k k 
k k k 
```

**Case 2**

Sample input:
```
5 2 *
```
Sample output:
```
* * * * * 
* * * * * 
```

**Case 3**

Sample input:
```
1 1 1
```
Sample output:
```
1 
```
