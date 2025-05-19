## C++ STL 2

### min heap
priority_queue<int, vector<int>, greater<int>> pq;

### max heap  
priority_queue<int> pq;

### set  
set<int> st; // implemented using a tree  
sorted and unique elements  
auto it = st.find( element ); // st.end() if not present  
int cnt = st.count( element ); //  either 1 or 0  
st.erase( element / iterator );  

### multi set  
everything same as set, except duplicates present

### unordered set  
unique elements, unsorted

### map  
stores unique keys in sorted order.  
mpp[1] = 2; = mpp.emplace({1,2}); = mpp.insert({1,2});  
mpp.find(3);

__multimap__ - map + duplicate keys  
__unordered_map__ - map without sorting