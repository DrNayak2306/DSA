## [Rotate array by d places](../Code/d_rotate.cpp)  
if A = [[1],[2],[3],[4]] and d point lies after [2],
then d_rotate(A) = [[3],[4],[1],[2]] which is the result achieved by:
1. rev(A) = [[4],[3],[2],[1]]
2. rev(A1) = [[3],[4],[2],[1]]
3. rev(A2) = [[3],[4],[1],[2]]

### Two pointer approach  
move zeroes to the end

## [Find missing number](https://github.com/DrNayak2306/DSA/blob/main/sediment_zeroes.cpp)
Brute: for all i in 1..N, linear scan if i exists
Better: build a hash table of N elements, for all i in 1..N peek if exists
Optimal: use xor or sum

Find single number, with rest double in the array (ex 1, 1, 2, 3, 3)
uses same logic as above

Pro tip - even though the optimal solution is common knowledge, evolving the solution from brute to better to optimal stands out in interviews."