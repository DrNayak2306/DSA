# [2 Sum](https://github.com/DrNayak2306/DSA/blob/main/two_sum.cpp)  

## BRUTE
Exhaustively check all pairs.
### Time
O(N^2)
### Space
O(1)

## BETTER
Hash map
### Time
O(N * log N) with unordered map  
O(N) ordered map best case  
O(N^2) ordered map worst case
### Space
O(N)

## OPTIMAL
Two pointer after sort
### Time
O(N * log N)
### Space
O(N) for copying array