# [Next permutation](../Code/next_permutation.cpp)

## BRUTE
Find all permutations and sort them & linear search.
### Time
O(N! * log N! + N!)
### Space
O(N!)

## OPTIMAL
1. Find the longest prefix match.
2. Replace the first of the suffix with the smallest element larger than it.
3. Reverse the suffix.
### Time
O(3N)
### Space
O(N)