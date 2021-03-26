## PROBLEM STATEMENT
Chef is always trying to find patterns within integers. Today Chef has 3 positive integers and he wonders
if any one of them can be written as the sum of the other two integers.

## Input:
First line will contain the number 5 , which is the number of testcases. Then the testcases follow.
Each testcase contains a single line of input, with three space-separated positive integers x , y , and z .

## Output:
For each testcase, output in a single line, "YES" if it's possible to represent any integer among the three
integers as the sum of the other two integers, and "NO" if not.

## NOTE: 
The output is case insensitive, meaning both uppercase and lowercase characters can be used at any position
of the output string.

## Constraints
1<=x,y,z<=1000

## Subtasks
100% points - Original constraints

## Sample Input:
5

1   1   2

1   3   2

2   2   2

100   100   201
11  22   33

## Sample Output:
YES

YES

NO

NO

YES

## Explanation:

Case 1: For this case, the third integer can be written as the sum of the first two. 2=1+1

Case 2: For this case, the second integer can be written as the sum of the first and third. 3=1+2

Case 3: For this case, no integer can be written as the sum of other two.

Case 4: For this case, no integer can be written as the sum of other two.

Case 5: For this case, the third integer can be written as the sum of the first two. 33=11+22

