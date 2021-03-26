## PROBLEM STATEMENT 
Chef Ada is training to defend her title of World Chess Champion.

To train her calculation skills, Ada placed a king on a chessboard. Remember that a chessboard has 8
rows and 8 columns (for the purposes of this problem, both the rows and the columns are numbered 1 
through 8); let's denote the square in row r and column c by (r,c) . A king on a square (r,c) can move
to another square (r′,c′) if and only if (r′−r)2+(c′−c)2≤2 .

Ada placed her king on the square (R,C) . Now, she is counting the number of squares that can be visited 
(reached) by the king in at most K moves. Help Ada verify her answers.

## Input

The first line of the input contains a single integer T  denoting the number of test cases. The description
of T test cases follows.

The first and only line of each test case contains three space-separated integers R , C and K .


## Output
For each test case, print a single line containing one integer — the number of squares the king can visit.

## Constraints

1≤T≤512

1≤R,C,K≤8

## Example Input

1

1 3 1

Example Output

6
