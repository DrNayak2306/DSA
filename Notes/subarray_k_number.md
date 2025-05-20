# Count subarrays with sum k
## Brute-force
Redundant summing over all possible subarrays.
### Time
O(N^3)
### Space
O(1)
## Better
Efficient summing over all possible subarrays.
### Time
O(N^2)
### Space
O(1)
## Optimal
Prefix sum. {sum:count}
### Time
O(N) // no collision unordered map
O(N * log N) // ordered map
### Space
O(N)