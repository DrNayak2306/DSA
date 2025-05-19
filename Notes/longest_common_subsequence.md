# [Longest consecutive subsequence](../Code/longest_consecutive_subsequence.cpp)

## BRUTE FORCE
For every element, check if consecutive sequence exists
### Time
O(N^2)
### Space
O(1)

## BETTER
Sort the sequence.  
Check for continuity. If break, check if longest sequence is this one.
### Time
O(N * log N) // merge sort
### Space
O(N) // merge sort

## OPTIMAL
Use `unordered_set`.
```
For every element in set, do
    if predecessor is absent, then
        check if corresponding sequence exists and record length
    else skip
```
### Time
O(3N) // without collisions  
O(N^2) // with collisions; rare
### Space
O(N)
