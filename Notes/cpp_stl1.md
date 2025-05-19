## C++ STL 1

__Iterator__ points to memory location of container element

__vector__ is a doubly linked list

`v = {1,2,3,4}`  

`vector<int>::iterator it = v.begin(); // it -> 1`  

`v.end() - // mem location after 4`  

`v.back(); // returns 4`  

`it++; // it -> 2`  

`*it; // returns 2`  


### erase overload
v.erase( iterator to specific );  
v.erase( iterator to first, iterator to after last);

### insert overload
v.insert(iterator, value);  
v.insert(iterator, freq, value);   
v.insert(iterator, container_start, container_end);  

delete last  
v.pop_back();  

v.swap( another vector);  

v.clear();

__list__ is a singly linked list and gives push_front() and 
emplace_front()