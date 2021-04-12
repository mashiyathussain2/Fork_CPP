## PROBLEM STATEMENT 
There are three piles of stones. The first pile contains a stones, the second pile contains b stones and the third pile contains c
stones. You must choose one of the piles and split the stones from it to the other two piles; specifically, if the chosen pile 
initially contained s stones, you should choose an integer k (0≤k≤s), move k stones from the chosen pile onto one of the remaining
two piles and s−k stones onto the other remaining pile. Determine if it is possible for the two remaining piles (in any order) to 
contain x stones and y stones respectively after performing this action.

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains five space-separated integers a , b , c , x and y .

## Output
For each test case, print a single line containing the string "YES" if it is possible to obtain piles of the given sizes or "NO" if
it is impossible.

## Constraints
1≤T≤100

1≤a,b,c,x,y≤109

## Subtasks

### Subtask #1 (20 points):
1≤a,b,c,x,y≤100

### Subtask #2 (80 points):
original constraints

## Example Input
4

1   2   3   2   4

3   2   5   6   5

2   4   2   6   2

6   5   2   12  1

## Example Output
YES

NO

YES

NO
