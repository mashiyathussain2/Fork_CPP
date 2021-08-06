Given an integer n, calculate the square of a number without using *, / and pow(). 

Examples : 
```
Input: n = 5
Output: 25
```
```
Input: 7
Output: 49
```
```
Input: n = 12
Output: 144
```

#### We can do it in O(Logn) time using bitwise operators. The idea is based on the following fact.

  > square(n) = 0 if n == 0
  
  > if n is even 
     square(n) = 4*square(n/2) 
  
  > if n is odd
     square(n) = 4*square(floor(n/2)) + 4*floor(n/2) + 1 

#### Examples:-

  square(6) = 4*square(3)
  
  square(3) = 4*(square(1)) + 4*1 + 1 = 9
  
  square(7) = 4*square(3) + 4*3 + 1 = 4*9 + 4*3 + 1 = 49
  

#### How does this work? 

> If n is even, it can be written as
  n = 2*x 
  n2 = (2*x)2 = 4*x2

> If n is odd, it can be written as 
  n = 2*x + 1
  n2 = (2*x + 1)2 = 4*x2 + 4*x + 1


