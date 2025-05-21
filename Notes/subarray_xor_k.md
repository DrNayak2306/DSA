# Number of subarrays with XOR k
## Brute-force
Check for all subarrays. Redundant xoring.  
O(N^3), O(1)
## Better
Check for all subarrays. Efficient xoring.
O(N^2), O(1)
## Optimal
Use map.  
O(N * log N), O(N)