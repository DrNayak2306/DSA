# All quadruples with sum 0
## Brute-force
Try out all the quadruples.  
O(N^4), O(1)
## Better
Maintain set for fourth element lookup.  
### i, .., j, [..lookup window..], k  
O(N^3 * log N), O(N)
## Optimal
Sort the array.  
### i, ..., j, [left, ...., right]  
2 sum within a doubly nested loop.  
O(N^3), O(1)

