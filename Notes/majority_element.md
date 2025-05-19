# [Majority element](https://github.com/DrNayak2306/DSA/blob/main/majorty_element.cpp)

## BRUTE
Double for loop
### Time
O(N^2)
### Space
O(1)

## BETTER
Maintain hash map.
### Time
O(N * log N + N) for ordered map  
O(N^2 + N) for unordered map  
### Space
O(N)

## OPTIMAL
__Moore's voting algorithm__  
cnt = 0  
if cnt = 0 then choose current element as majority  
else if current element matches with majority then cnt++  
else cnt--  
if cnt = 0 return -1  
### Time
O(N)
### Space
O(1)