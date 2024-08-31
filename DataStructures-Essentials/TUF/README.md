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
Q3: In the following code
```C++
class Foo{
private:
        int x;
public:
    Foo(int i):x(i){}
    bool operator < (const Foo& rhs) const{
        return x < rhs.x;
    }
    int get() const {
        return x;
    }
};

int main(){
    //declaring a vector of custom data-type
    vector<Foo> foo_vector{
        Foo(8),Foo(6),Foo(7),Foo(1),Foo(10),Foo(-4)
    };
    
    //applying sort on a custom data-type
    sort(foo_vector.begin(), foo_vector.end());
}
```
for the `sort` function to work on `vector` of `Foo` objects, why does the the operator overloading require `const` parameter and `const` function to make the overloaded operator work for the `sort` function?

A: In C++, the `sort` function from the Standard Template Library (STL) requires that the comparison operator used for sorting (like `<` in your case) be a `const` member function. Here's why:

## Const Member Function (`bool operator < (const Foo& rhs) const`)
1. `const` parameter (`const Foo& rhs`):
- The `const` qualifier on the parameter means that the `rhs` object cannot be modified within the function. This is important because when comparing two objects for sorting, you want to ensure that neither object is changed in the process. This makes the function safe and predictable, ensuring that the comparison does not have side effects.
2. `const` member function (`const` after the function signature):
- The `const` qualifier after the function signature idicates that the function does not modify the member variables of the object on which it is called. In other words, the function guarantees that the state of the object remains unchanged after the comparison is performed.
- This is crucial because `sort` may call the comparison function multiple times during sorting, and it expects that the objects being compared do not change state between comparisons. If the function could modify the object, the sorting algorithm might behave unpredictably.

## Why This Matters for `sort`:
- The `sort` function internally needs to compare elements in the range `[first, last)` using the provided comparison comparison operator (in your case, `<`).
- The objects being sorted might be const-qualified, meaning the sort function might need to compare const references to your objects. For example, the signature, the signature for the sort function expects a comparator function that can compare `const Foo&` objects.
- If your comparison operator is not const, it won't be callable with const references, and hence, it won't work with the `sort` function. This is because `sort` works on const references to ensure that the objects themselves aren't modified during sorting, which is a fundamental requirement for correct and predictable sorting.


---
Q4: Why does the following code
```C++
#include <iostream>

auto addTwoNumbers(float a, float b) -> float {
    return a + b;
}

int main() {
    char a = 'a';
    char b = 'b';
    char c = 'c';

    std::cout << "Address of a: " << &a << "\n"; //a
    std::cout << "Address of b: " << &b << "\n"; //ba
    std::cout << "Address of c: " << &c << "\n"; //cba
    std::cout << "Address of addTwoNumbers: " << &addTwoNumbers << "\n"; //1
    
    std::cout << "Address of a: " << (void *)&a << "\n"; //0x16fdfef5f
    std::cout << "Address of b: " << (void *)&b << "\n"; //0x16fdfef5e
    std::cout << "Address of c: " << (void *)&c << "\n"; //0x16fdfef5d
    std::cout << "Address of addTwoNumbers: " << (void *)&addTwoNumbers << "\n"; //0x100001308
}
```
print to console the output as specified via comments?

A: 
## Explanation
1. Address Printing for Characters (`char a`, `char b`, `char c`):
- When you print the address of a character variable directly with `std::cout << &a;`, you may not see a typical memory address (like `0x16fdfef5f`). Instead, you might see unexpected output.
- This happens because `std::cout` interprets `&a` (a pointer to a `char`) as a C-string. It will try to print the characters starting from that memory location until it hits a null terminator (`\0`).
- Hence, the first block of address printing (`&a`, `&b`, `&c`) produces the output that reflects the characters stored in memory in reverse order (`cba`).
    - The reason it shows as `a`, `ba`, `cba` is because of how these characters are stored sequentially in memory. The pointer to `a` prints just `a`, the pointer to `b` prints `ba`, and the pointer to `c` prints `cba`.

2. Correctly Printing Memory Addresses:
- The next set of outputs uses `std::cout<<(void*)&a;` to explicitly cast the character pointer to `void*`. This forces `std::cout` to print the actual memory addresses in hexadecimal format.
- Here, you'll see addresses like `0x16fdfef5f`, `0x16fdfef5e`, and `0x16fdfef5d`. These addresses decrease because the stack grows downwards (from high memory to low memory).

3. Address of the Function (`addTwoNumbers`):
- The address of the function `addTwoNumbers` is stored in a different memory segment , typically the code segment . When you print it using `&addTwoNumbers`, it's shown as a separate address (e.g., `0x100001308`).
- The function's address does not relate to the stack addresses of the variables (`a`, `b`, `c`), which explains why it's different.

## Summary
- The first set of outputs (`"Address of a: " << &a"`, etc.) prints strings like `"a", `"ba"`, `"cba"` because `std::cout` interprets the character pointers as C-strings.
- The second set of outputs (`"Address of a: " << (void*)&a`, etc.) correctly prints the memory addresses in hexadecimal form by casting the pointers to `void*`.
- The address of the `addTwoNumbers` function is printed separately, showing a distinct address in the code segment.

The comments in your code explain the expected output based on these behaviors:
- `"a"`, `"ba"`, `"cba"`: Representing how characters are stored in sequence.
- `"0x16fdfef5f"`, `"0x16fdfef5e"`, `"0x16fdfef5d"`: The actual memory addresses in the stack.
- `"0x100001308"`: The function address in the code segment.

---



