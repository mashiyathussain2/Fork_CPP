Given two force vectors, find out whether they are parallel, perpendicular or neither. 
Let the first vector be A = a1 i +a2 j + a3 k and the second vector be B = b1 i + b2 j + b3 k.

A.B = a1 * b1 + a2 * b2 + a3 * b3

A x B = (a2 * b3 - a3 * b2) i - (a1 * b3 - b1* a3) j + (a1 * b2 - a2 * b1) k

|A|2 = a12 + a22 + a32

If A.B = 0, then A and B are perpendicular.

If |A X B|2 = 0, then A and B are parallel.

Example 1:

Input: A = 3i + 2j + k, B = 6i + 4j + 2k

Output: 1

Explanation: |A X B|2 = 0

Example 2:

Input: A = 4i + 6j + k, B = i - 1j + 2k

Output: 2

Explanation: A.B = 0
