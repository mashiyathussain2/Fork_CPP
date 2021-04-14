# *Task*
### Given an array of numbers , *_A[n]_* , perform the following conditional actions:
1. If n<=0 , print invalid option and exit the program 
2. If A[i]= A[i+1] , do not swap
3. If A[i] >||< A[i+1] , swap respectively 



## Input Format
A single line containing a positive integer,_i_ for the number of elements to be inputed .
A single liine containing a positive integer array A[i] , to store n number of inputs

## Output Format
Print the swapped array if swapping is possible , if not print *invalid number of inputs*

#### *Sample Input 1* 
>- 4
>- 1 7 1 6 
#### *Sample Output 1*
>- 1 1 6 7



#### *Sample Input 2*
>- 2
>- 1 1
#### *Sample Output 2*
>- 1 1


#### *Sample Input 3*
>- -3
#### *Sample Output 3*
>- invalid number of inputs


## Constraints
>- T ~ 1 ≤ N ≤ 10000000
