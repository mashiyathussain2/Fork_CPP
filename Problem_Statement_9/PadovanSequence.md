

#### The Padovan sequence is the sequence of integers P(n) defined by the initial values. and the recurrence relation.
```
P(n) = P(n-2) + P(n-3)
  P(0) = P(1) = P(2) = 1 
  
```
#### Given n, calculate P(n).

**Example 1:**
```
Input: n = 0
Output: 1
Explanation: P(1) = P(2)  = 0 + 1 = 1.
```

**Example 2:**

```
Input: n = 7
Output: 2
Explanation: P(7) = P(5) + P(4) = P(3)+P(2)+P(2)+P(1)=P(2)+P(1)+1+1+1 = 1+1+1+1+1 = 5
```
**Constraints:**
```
 0 <= n <= 10000
 
 ```
