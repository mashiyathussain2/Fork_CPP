##PROBLEM STATEMENT 
A certain grade of steel is graded according to the following conditions.

Hardness must be greater than 50.
Carbon content must be less than 0.7.
Tensile strength must be greater than 5600.


The grades are as follows:
Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Garde is 6 if only one condition is met.
Grade is 5 if none of three conditions are met.

Write a program, if the user gives values of hardness, carbon content and tensile strength of the steel under consideration and display the grade of the steel.

## Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three numbers hardness, carbon content and tensile strength of the steel.

## Output
For each test case, print Grade of the steel depending on Conditions, in a new line.

## Constraints

1 ≤ T ≤ 1000

0≤ hardness, carbon content, tensile strength ≤ 10000

## Example
## Input

3

53     0.6    5602

45     0      4500

0      0        0 


## Output

10

6

6
