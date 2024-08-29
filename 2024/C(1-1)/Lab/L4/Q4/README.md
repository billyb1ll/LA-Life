## Grading Lab Exercise

Write a program to determine whether a student score passes or fails the course based on the following criteria:

* `Outstanding`: the range of score `[70,100]`
* `Pass`: the range of score `[50,70)`
* `Fail`: the range of score `[0,50)`

If the user inputs a score outside the specified ranges above, the program MUST print `invalid score`, and continue to ask the user for a valid score.

**IMPORTANT**: You must use `do-while` in this question. Otherwise, you will get a ZERO score.

<hr>

**Case 1**

Sample input:
```
-1
-42
124
422
98
```
Sample output:
```
invalid score
invalid score
invalid score
invalid score
Outstanding
```

**Case 2**

Sample input:
```
70
```
Sample output:
```
Outstanding
```

**Case 3**

Sample input:
```
102
49
```
Sample output:
```
invalid score
Fail
```

**Case 4**

Sample input:
```
-7
53
```
Sample output:
```
invalid score
Pass
```
