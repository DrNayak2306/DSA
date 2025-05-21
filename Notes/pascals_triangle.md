# Pascal's triangle
1. If asked `nCr`, just compute `n*(n-1)*...*(n-r+1)/r*(r-1)*...*1`  
This takes **O(r)** time and **O(1)** space.
2. If asked an entire row, build the product.  
Don't do `nCr` repeatedly (Like redundant and non-redundant summing.)  
This takes **O(n)** time and **O(1)** space.
3. If asked entire triangle, generate each row by above method.  
This takes **O(n^2)** time and **O(1)** space.