# [Longest subarray with sum k](https://github.com/DrNayak2306/DSA/blob/main/subarray_sum_k.cpp)  

## BRUTE 
Sum of all possible subarrays.
### Time
O(N^3) with redundant summing  
O(N^2) w/o redundant summing
### Space
O(1)

## BETTER
Prefix sum map.  
Don't update prefix sum if already exists.  
Also OPTIMAL if array contains +, -, and 0.  
### Time
O(N * log N) with ordered map  
O(N) with unordered map and no collisions.  
O(N^2) with unordered map and all collisions.
### Space
O(N)

## OPTIMAL
If array contains only non negative.  
Two pointer.