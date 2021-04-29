## PROBLEM STATEMENT 
Yet again Virat Kholi lost the toss, now fans are wondering whether flipping the coin is a good option to decide which captain will have the right to choose whether to bat or field. 
So they decided on another option for the toss, before the match both the teams will be given a Competitive Programming Problem. The first team who solves the problem will have the
right to choose whether to bat or field. In today's match following problem is given:- 

You are given a rectangular sheet of side lengths N  and M . You are also given a variable T , which is initially 0 . 

You perform the following operation on rectangle:- 

If N=1 and M=1 , process ends.
Otherwise you will randomly cut the rectangle either horizontally or vertically parallel to the side of the rectangle. You can only cut from integer coordinates and all the available
options for cuts are equally probable. Increment T by 1 and continue the process with the rectangle of larger area. You have to report the E(T2) , the expected value of T2 . 

It can be proved that this expected value can be expressed as a fraction PQ , where P and Q are positive integers and Q is coprime with 998,244,353 . You should compute P ⋅
Q−1  modulo 998,244,353 , where Q−1 denotes the multiplicative inverse of Q modulo 998,244,353 . 

Help your favorite team in solving the problem.

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N , M .

## Output
For each test case, print a single line containing one integer, P⋅
Q−1  modulo 998,244,353 .

## Constraints
1 ≤ T ≤ 105

1 ≤ N , M ≤ 106

## Example Input
2

2   2

3   3

## Example Output
4

16
