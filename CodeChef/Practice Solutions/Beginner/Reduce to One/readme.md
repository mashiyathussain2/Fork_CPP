## PROBLEM STATEMENT 
You have become good friends with Chef. Right now, Chef is busy in the kitchen, so he asked you to solve a problem for him.

Consider a list of integers L . Initially, L contains the integers 1 through N , each of them exactly once (but it may contain 
multiple copies of some integers later). The order of elements in L is not important. You should perform the following operation N−1 times:

Choose two elements of the list, let's denote them by X  and Y . These two elements may be equal. Erase the chosen elements from L .
Append the number X+Y+X⋅Y to L .
At the end, L contains exactly one integer. Find the maximum possible value of this integer. Since the answer may be large, compute it modulo 
1,000,000,007 (109+7).

## Input
The first line of the input contains a single integer T  denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N .

## Output
For each test case, print a single line containing one integer ― the maximum possible value of the final number in the list modulo 109+7 .

## Constraints
1≤T≤100,000

1≤N≤1,000,000

## Subtasks

### Subtask #1 (20 points): 
1≤T,N≤25

### Subtask #2 (80 points): 
original constraints

## Example Input
3

1

2

4

## Example Output
1

5

119

## Explanation

### Example case 1: 
L=[1]

### Example case 2: 
L=[1,2]→[1+2+1⋅2]

### Example case 3:
L=[1,2,3,4]→[2,3,9]→[3,29]→[119] . The chosen elements in each step are in bold.

