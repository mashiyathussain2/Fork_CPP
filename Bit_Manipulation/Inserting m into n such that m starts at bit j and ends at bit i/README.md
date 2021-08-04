We are given two numbers n and m, and two-bit positions, i and j. Insert bits of m into n starting from j to i. We can assume that the bits j through i have enough space to fit all of m. That is, if m = 10011, you can assume that there are at least 5 bits between j and i. You would not, for example, have j = 3 and i = 2, because m could not fully fit between bit 3 and bit 2. 
Examples : 
 
```
Input : n = 1024
        m = 19
        i = 2
        j = 6;
Output : n = 1100
Binary representations of input numbers
m in binary is (10011)2
n in binary is (10000000000)2
Binary representations of output number
(10000000000)2
```
```
Input : n = 5
        m = 3
        i = 1
        j = 2
Output : 7
```
