## PROBLEM STATEMENT 
Chef is attending math classes. On each day, the teacher gives him homework. Yesterday, the teacher gave Chef a sequence of positive
integers and asked him to find the maximum product of two different elements of this sequence. This homework was easy for Chef, since 
he knew that he should select the biggest two numbers.

However, today, the homework is a little bit different. Again, Chef has a sequence of positive integers A1,A2,…,AN , but he should find 
two different elements of this sequence such that the sum of digits (in base 10) of their product is maximum possible.

Chef thought, mistakenly, that he can still select the two largest elements and compute the sum of digits of their product. Show him that 
he is wrong by finding the correct answer ― the maximum possible sum of digits of a product of two different elements of the sequence A .

## Input
. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
. The first line of the input contains a single integer N .
. The second line contains N space-separated integers A1,A2,…,AN .

## Output

For each test case, print a single line containing one integer ― the maximum sum of digits.

## Constraints

1≤T≤100

2≤N≤100

1≤Ai≤10^4 for each valid i

## Subtasks

### Subtask #1 (100 points):
original constraints

## Example Input

3
2
2 8
3 
8 2 8
3
9 10 11

## Example Output

7
10
18

## Explanation

Example case 1: The only two numbers Chef can choose are 2 and 8 . Their product is 16 and the sum of digits of 16 is 7 .

Example case 2: Chef can choose 8 and 8 ; their product is 64 . Note that it is allowed to choose two different elements with the same value.

Example case 3: Chef can choose 9 and 11 . Their product is 99 and the sum of its digits is 18 . Note that choosing 10 and 11 will result in a 
larger product (110), but the sum of its digits is just 2 .
