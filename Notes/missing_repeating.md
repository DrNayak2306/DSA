# Find missing and repeating number in an n sequence
## Brute-force
Count all numbers from 1 to n.
### Time
O(n^2)
### Space
O(1)
## Better
Use hash array.
### Time
O(2n)
### Space
O(n)
## Optimal 1
Summation based
```
a = sum of array
b = sum of 1 to n

a - b = repeat-miss

c = sum of squares in array
d = sum of 1^2 to n^2
c - d = repeat-miss * repeat+miss

c-d / a-b = repeat+miss

use above two equations
```
### Time
O(4n)
### Space
O(1)
## Optimal 2
xor based
```
a = xor(array)
b = xor(1..n)
a^b = miss^repeat

Find the different first different bit in a^b.
Group elements from array and [1..n] into either 0 bit category or 1 bit category.

c = xor(0-bit category)
d = xor(1-bit category)

check if c is repeating by linear scan, d will follow
```
### Time
O(6n)
### Space
O(1)


