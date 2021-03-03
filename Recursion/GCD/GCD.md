# *Task*
#### the greatest common divisor (GCD) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. ####   
```
36 ~ 2 x 2 x 3 x 3
60 ~ 2 x 2 x 3 x 5

GCD ~ 2 x 2 x 3 = 12
```


### Given two integer, *_n1_* and *_n2_* , perform the following conditional actions:
1. If _n1_  is greater than _n2_ swap the two values and find the gcd and print *GCD of the two numbers is :*
2. If _n1_ or _n2_ is equal to 0 , print the non zero number
3. If _n1_ and _n2_ are 0 , print 0
4. If either _n1_ or/and _n2_ is negative , print invalid

## Input Fromat
A single line containing two positive integers , _n1_ and _n2_.

## Output Format
Print **GCD of the two numbers** if the numbers are positive ; if the numbers are 0 print **0** , if the numbers are negative print *invalid*
if either number is 0 print the non zero number 

#### *Sample Input 1* 
>- 14 1
#### *Sample Output 1*
>- GCD of the two numbers is : 1



#### *Sample Input 2*
>- 0 6
#### *Sample Output 2*
>- 6



#### *Sample Input 3*
>- 0 0
#### *Sample Output 3*
>- 0

#### *Sample Input 4*
>- -22 -11
#### *Sample Output 4*
>- invalid


##Constraints
>- 1 ≤ n1 , n2 ≤ 2 . 10^9
