# [Maximum subarray sum](../Code/max_subarray_sum.cpp)

## Careful with variable initialization; res <- INT_MIN

## BRUTE
Consider all subarrays; redundant summing.
### Time
O(N^3)
### Space
O(1)

## BETTER
Consider all subarrays; efficient summing.
### Time
O(N^2)
### Space
O(1)

## OPTIMAL
__Kadane's algorithm__  
Increase window size if current sum is non negative, else reject window.
### Time
O(N)
### Space
O(1)"