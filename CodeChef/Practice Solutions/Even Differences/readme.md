## PROBLEM STATEMENT
You have an array consisting of N integers a1,a2...aNc. You may perform the following operation zero or more times.

Choose any index i (1≤i≤N) and set ai:=ai+1
Determine the minimum number of operations you have to perform so that all pairwise differences in the resulting 
array are even. More formally, in the resulting array it should hold that, for every i and j (1≤i,j≤N) , ai−aj is 
even.

## Input:
The first line contains a single integer T— the number of test cases. The description of each test case is as follows.
The first line of each test case contains a single integer N — the length of the array.
The second line of each test case contains N integers, a1,a2...aN — the integers in the array.

## Output:
For each test case output a new line containing a single integer — the minimum operations you must perform to make all 
the pairwise differences even.

## Constraints


1≤T≤1000

1≤N≤500

1≤ai≤105

## Subtasks
### Subtask #1 (100 points):
original constraints

## Sample Input:

2

2

2   4

3

4   1   2

## Sample Output:
0

1
