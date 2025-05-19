# [Stable rearrange by alternating sign](../Code/alternate_sign.cpp)

## BRUTE
Copy pos and neg in separate arrays.
### Time
O(N + N/2)
### Space
O(N)

## OPTIMAL
Works only if no.(pos) = no.(neg)  
One pass by maintaining two pointers for pos and neg in ans array.
### Time
O(N)
### Space
O(N)