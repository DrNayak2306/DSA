# [Rotate a matrix by 90 degrees](../Code/rotate_matrix_90.cpp)
## Brute-force
```
1. Declare answer matrix
2. Map [i][j] -> [j][n-1-i]
```
### Time
O(n^2)
### Space
O(n^2)
## Optimal
```
1. Transpose the matrix.
2. Reverse every row.
```
### Time
O(3/2 * n^2)
### Space
O(1)