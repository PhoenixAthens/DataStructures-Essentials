#  Notes and Doubts
Q1: Why is `emplace_back` faster than `push_back`?

A: 

-----
Q2: Why does the following code snippet
```C++
    //copy_vec = 3 5 7 9 11 13 15 17 19 21
    vector<int>::iterator it_end = copy_vec.end();
    cout<<*(it_end-1)<<"\n"; //21,
    //however, if we change it to
    //cout<<*(it_end-1)<<"\n"; //it outputs 13, probably some garbage value
    cout<<*(it_end)<<"\n";   //13
    cout<<*(it_end+1)<<"\n"; //15
    cout<<*(it_end+2)<<"\n"; //17
    cout<<*(it_end+3)<<"\n"; //19
    cout<<*(it_end+4)<<"\n"; //21
```
result in output which looks as if we are accessing the elements of `copy_vec` from 5th element onwards?

A: The behavior you're observing is due to undefined behavior, which happens when you go beyond the bounds of the valid elements in the vector and dereference those invalid memory addresses.

**Explanation:**
1. *Undefined Behavior*: When you access elements using an iterator that goes beyond the `end()` of the vector (like *it_end*, *it_end + 1*, etc.), you are accessing memory that is not part of the vector. This memory might still contain data that was previously there or just happen to have data that looks familiar. This is purely coincidental and a result of how memory management works in C++.
2. *Memory Layout and Previous Data*: The elements you are seeing `(13, 15, 17, 19, 21)` might be the result of the way memory is laid out and what was previously stored in those memory locations. Since you are accessing out-of-bounds memory, you're likely reading leftover values that were written during the `push_back` operations. However, these are not part of the vector anymore, and accessing them is dangerous.
3. *Why You See Those Specific Values*: When you push back elements into `copy_vec`, the vector grows, and the underlying storage might be reallocated. When you iterate past the `end()`, you might be accessing the memory where these elements used to reside, which is why you see the values `13, 15, 17, 19, and 21`.

**Important Consideration:**
- *Do Not Rely on Undefined Behavior*: Although it might seem that you're accessing valid elements, this is not something you should rely on. Dereferencing iterators past `end()` is not safe and can lead to crashes, unpredicatable results, or other forms of undefined behavior.

**Proper Code Usage:**
To access elements of the vector within bounds, you should always work within the valid range of iterators, i.e., between `begin()` and `end() - 1`. Here's an example of how to properly iterate through and access vector elements:
```c++
for (auto it = copy_vec.begin(); it != copy_vec.end(); ++it) {
    cout << *it << " ";
}
cout << "\n";
```
If you need to access the elements from the fifth position onwards:
```C++
for (auto it = copy_vec.begin() + 5; it != copy_vec.end(); ++it) {
    cout << *it << " ";
}
cout << "\n";
```
**Summary:**
The output you're seeing is a result of undefined behavior and should not be relied upon. The correct and safe way to access vector elements is to stay within the bounds of valid iterators. If you need to access elements after the `end()` iterator, it's essential to reevaluate the logic or reconsider the data structure being used.

---
 
