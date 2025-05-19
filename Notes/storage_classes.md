`auto` - compile time deduction of datatype based on statement  

`l-value` has identifiable memory location, `r-value` doesn't

### scope of a variable
1. **instance scope** - specific to an instance of a class  

2. **static-member scope** - common to all instances of a class
3. **namespace scope** - common across a namespace

### storage class:
1. `auto` (default) - local; garbage; RAM; end of program; across block  

2. `extern` - global; 0; RAM; end of program; across files
3. `static` - local; 0; RAM; end of program; across function calls
4. `register` - local; garbage; register / RAM; end of program; across block
5. `mutable` - be able to change specific members
6. `thread_local` - local to thread; RAM; end of thread

`static` keyword usage:
1. function

2. members of a class
3. methods of a class
4. global - where it has only internal linkage (not across files)
