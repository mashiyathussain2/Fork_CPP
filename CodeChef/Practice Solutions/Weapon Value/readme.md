## PROBLEM STATEMENT 
A competition with N participants (numbered 1 through N ) is taking place in Chefland. There are N−1
rounds in the competition; in each round, two arbitrarily chosen contestants battle, one of them loses
and drops out of the competition.

There are 10 types of weapons (numbered 1 through 10 ). You are given N
strings S1,S2,…,SN ; for each valid i and j , the j -th character of Si 
is '1' if the i -th contestant initially has a weapon of type j or '0' 
otherwise. During each battle, for each type j such that both contestants 
in this battle currently have weapons of type j , these weapons of both
contestants are destroyed; after the battle, the winner collects all 
remaining (not destroyed) weapons of the loser. Note that each contestant
may win or lose regardless of the weapons he/she has.

Chef is feeling bored watching the contest, so he wants to find the maximum 
possible number of weapons the winner of the tournament could have after the
last battle, regardless of which contestants fight in which battles or the 
results of the battles. Can you help him?

## Input
The first line of the input contains a single integer T denoting the number
of test cases. The description of Tvtest cases follows.
The first line of each test case contains a single integer N .
N lines follow. For each valid i , the i -th of these lines contains a single
string Si .

## Output
For each test case, print a single line containing one integer ― the maximum number 
of weapons the winner could have.

## Constraints
1≤T≤10
1≤N≤105
|Si|=10 for each valid i

## Subtasks

### Subtask #1 (30 points): 1≤N≤10

### Subtask #2 (70 points): original constraints

## Example Input
1
3
1110001101
1010101011
0000000011

## Example Output
4
