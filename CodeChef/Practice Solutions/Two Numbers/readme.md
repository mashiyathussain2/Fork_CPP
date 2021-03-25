## PROBLEM STATEMENT 
Alice and Bob are playing a game. Alice initially has the number A and Bob has the number B.
There are a total of N turns in the game, and Alice and Bob alternatively take turns. In each
turn the player whose turn it is, multiplies his or her number by 2. Alice has the first turn.

Suppose after all the N turns, Alice's number has become C and Bob's number has become D. You
want to calculate the integer division of the maximum number among C and D by the minimum number
among C and D.

## Input
The first line of the input contains an integer T denoting the number of test cases. The description
of each testcase follows.

Each test case contains a single line with 3 integers A, B, and N.

## Output
For each test case output a new line with a single integer which should be the answer.

## Constraints

1 ≤ T ≤ 100

1 ≤ A ≤ 1000000000

1 ≤ B ≤ 1000000000

1 ≤ N ≤ 1000000000

## Subtasks

### Subtask #1 (30 points):
N ≤ 30

### Subtask #2 (70 points): 
Original constraints

## Example

### Input:

3

1   2   1

3   2   3

3   7   2

## Output:

1

3

2

## Explanation

In the first testcase, the initial numbers are (A = 1, B = 2). There is only one turn.
In this turn Alice multiplies her number by 2. Hence, we get (A = 2, B = 2). Therefore 
C = 2, and D = 2. max(C, D)/min(C, D) = 2/2 = 1. Hence the first output is 1.

In the second testcase, the initial numbers are (A = 3, B = 2). There three turns. In
the first turn Alice multiplies her number by 2. Hence, we get (A = 6, B = 2). In the 
second turn Bob multiplies his number by 2. Hence, we get (A = 6, B = 4). In the third 
turn Alice multiplies her number by 2. Hence, we get (A = 12, B = 4). Therefore C = 12,
and D = 4. max(C, D)/min(C, D) = 12/4 = 3. Hence the second output is 3.

In the third testcase, the initial numbers are (A = 3, B = 7). There two turns. In the 
first turn Alice multiplies her number by 2. Hence, we get (A = 6, B = 7). In the second
turn Bob multiplies his number by 2. Hence, we get (A = 6, B = 14). Therefore C = 6, and
D = 14. max(C, D)/min(C, D) = 14/6 = 2, because we are doing integer division. Hence the
third output is 2.

