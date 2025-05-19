# [Set matrix zeroes](../Code/matrix_zeroes.cpp)

## Brute force
```
1. For every zero in the matrix, set all corresponding elements in row and col to -1.
2. Convert all -1 to 0.
```
### Time
O(m * n) * O(m + n) + O(m * n)
### Space
O(1)
## Better
Eliminate repeated work: If even one in a col or row is 0, entire is 0.
```
1. Initialize col_arr[m], row_arr[n] to 0.
2. For every 0 in matrix, set to 1 the corresponding element of col and row arrays.
3. Convert all as per row and col arrays.
```
### Time
O(m * n) + O(m * n)
### Space
O(m) + O(n)
## Optimal
Eliminate repeated space: Let the first row and col serve as leaders.  
## Caution
1. left corner must be maintained as separate variable. 
2. Convert n length array after converting n-1 length array.
```
1. Initialize row_arr[n] to 0, col_arr[n-1] to 0, left_corner to 0
2. For every 0 in matrix; update row, col, left corner.
3. Convert all as per row and col arrays as per caution 2.
```
### Time
O(m * n)
### Space
O(1)