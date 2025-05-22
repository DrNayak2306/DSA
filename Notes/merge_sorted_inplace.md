 # Merge 2 sorted arrays without extra space
 ## Optimal 1
 1. 2 pointer; L -> largest of arr1, R -> smallest of arr2
 2. Sort arr1, arr2
 ### Time
 O(min(m, n)) + O(mlogm + nlogn) // average case quicksort
 ### Space
 O(1)
 ## Optimal 2
 **Gap method** - Derived from shell sort (below.)
 ```
 1. gap = ceil((m+n)/2)
 2. while true, do
 3. sort elements at the ends of gap while shifting the gap window incrementally.
 4. if gap = 1, then break
 4. gap = ceil(gap/2)
 ```
 ### Time
 O((m+n)log(m+n))
 ### Space
 O(1)
 ## Shell sort
 1. initialize gap = ceil(n/2)
 2. while true, do
 3.     sort all elements at indices 0, gap, 2*gap, ...
 4. if gap = 1, break
 5. gap = ceil(gap/2)