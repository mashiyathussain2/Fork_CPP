## PROBLEM STATEMENT 

Chef wants to take Chefina on a date. However, he has to complete one more task before leaving. 
Since he does not want to be late, he is asking you for help.

There are N bags with coins in a row (numbered 1 through N); for each valid i , the i-th bag 
contains Ai coins. Chef should make the number of coins in each bag divisible by a given integer
K in the following way:

. choose an integer c  between 0  and N (inclusive)
. take some coins from the first c bags ― formally, for each i (1≤i≤c), he may choose any number of coins between 0
  and Ai inclusive and take them out of the i-th bag
. move some of these coins to some of the last N−c bags ― formally, for each i
 (c+1≤i≤N), he may place a non-negative number of coins in the i-th bag

Of course, the number of coins placed in the last N−c bags must not exceed the number of coins taken out from the 
first c bags, but there may be some coins left over. Let's denote the number of these coins by R. You should find 
the smallest possible value of R.

### Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T 
test cases follows : 

. The first line of each test case contains two integers N and K .
. The second line contains N space-separated integers A1,A2,…,AN.

### Output

For each test case, print a single line containing one integer ― the smallest value of R .

### Constraints


1≤T≤103

1≤N≤105

0≤Ai≤109 for each valid i

1≤K≤109

. the sum of N over all test cases does not exceed 105

### Subtasks

#### Subtask #1 (10 points):
K=2

#### Subtask #2 (20 points):
N≤3

#### Subtask #3 (70 points): 
original constraints

### Example Input

2

5   7

1   14   4   41   1

3   9

1   10   19

### Example Output

5

3

### Explanation

#### Example case 1: 
One of the possible solutions is to choose c=4 , remove 1 , 0 , 4  and 13 coins from bags 1, 2 , 3 and 4 respectively, and add 13  coins to bag 5 .

#### Example case 2: 
The optimal solution is to choose c=3 and remove one coin from each bag.

