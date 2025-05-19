## Hashing

main max size: int arr[1e6]  

global max size: int arr[1e7]  

globally all declared variables are initialized to 0  

### map in STL
* Fetching / storing takes O(logn) in best, avg, worst cases  
* Any datatype can be key

### unordered_map in STL
* Fetching / storing takes O(1) in best, avg cases and O(n) in worst case  
* Only int as key.

__use unordered_map if TLE then go for map__

__Division rule of hashing__ - num % size of hash table -> num  

__collision__ - multiple inputs get mapped to same index

[Hashmap chaining](https://github.com/DrNayak2306/DSA/blob/main/hashing_chain.cpp)