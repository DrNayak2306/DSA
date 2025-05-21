# Elements that appear > floor(n/3) times
## Brute-force
For every element, check if condition is met.
### Time
O(N^2)
### Space
O(1)
## Better
Use hashmap.
### Time
O(N * log N) // ordered map
O(N) // average case unordered_map
### Space
O(N)
## Optimal
Moore's voting algorithm with 2 variables.  
**Before initializing check if other variable is maintaining the value**  
**Check if final values are correct**
### Time
O(2N)
### Space
O(1)