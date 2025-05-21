# All triples with sum 0
## Brute-force
Check all triples.
### Time
O(N^3 * log N) // ordered set
O(N^3) // most cases of unordered set
### Space
O(no. of triplets)
## Better
Hashing.
### Time
O(N^2 * log N) // ordered set
O(N^2) // most cases of unordered set
O(N) + O(no. of triplets)
## Optimal
Sort the array; 2 pointer; removes additional N space
### Since set is not used, duplicates must be avoid using while (arr[i] == arr[i-1]) logic.
### Time
O(N^2)
### Space
O(1)
