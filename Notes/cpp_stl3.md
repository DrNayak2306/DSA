## C++ STL 3

### sort overload
sort(it_start, it_end);  
sort(v, v+n);  
sort(v, v+n, greater<int>);  
sort(it_start, it_end, custom_comparator);  

### comparator
```
bool comp(a, b){
    true condition => a,b
    false condition => b,a
}
```

**__builtin_popcount( number )**
count of set bits in number

next_permutation(it_start, it_end); // false if sorted in desc  
permutes it_start to it_end of container to next permutation  

auto it = max_element( a, a+n)