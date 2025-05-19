# [Sort array of 0s,1s,2s](../Code/sort_012.cpp)

## BRUTE
Sort
### Time
O(N * log N)
### Space
O(N)

## BETTER
count 0, 1, 2, and overwrite array
### Time
O(2 * N)
### Space
O(1)

## OPTIMAL
__Dutch national flag algorithm__  
arr[0..low-1] : all 0s  
arr[low..mid-1] : all 1s  
arr[mid..high-1] : unsorted  
arr[high..n-1] : all 2s  
arr[mid] is discriminated element  
### Time
O(N)
### Space
O(1)