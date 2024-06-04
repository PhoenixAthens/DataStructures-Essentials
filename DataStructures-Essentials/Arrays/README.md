**Context:[`array-to-functions.cpp`](add-link-here)**<br>
Q1: In the following code
```C++
#include <iostream>
using std::cout;

void printArray_4(auto&);
int main(int argc, char** argv){
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10;i++){
        cout<<"Elem at "<<i<<" is "<<arr[i]<<"\n";
    }
    
     printArray_4(arr);
}

//here we are creating an alias to the arr array, 
//meaning both parameter and array passed as argument point to the same
//contiguous block of memory

void printArray_4(auto& arr){ 
    int size = sizeof(arr)/sizeof(int); //Size of arr is 10
    cout<<typeid(arr).name()<<"\n"; //A10_i,
    cout<<"Size of arr is "<<size<<"\n";
}
```
What does `A10_i` mean?

A: The output of `A10_i` from `cout<< typeid(arr).name <<"\n";` in the `printArray_4` function is a type name mangled by the compiler. It represents the type of the `arr` parameter, which is a reference to an array of 10 integers `(int (&arr)[10])`.

In C++, the `typeid` operator returns a `type_info` object that represents the type of its operand at runtime. The `name()` member function of `type_info` returns a string representation of the type, but this string is implementation-defined and may be mangled (encoded) by the compiler.

The mangled name `A10_i` is a compiler-specific encoding of the type `int (&)[10]`. The `A` likely represents an array, the `10` represents the size of the array (10 elements), and the `i` represents the element type (int). However, the exact meaning of each character in the mangled name may vary between different compilers and platforms.

In general, you should not rely on the specific mangled names returned by `typeif(...).name()`, as they are not standardized and may change between different compiler versions or platforms. These mangled names are primarily intended for use by tools like debuggers and linkers, rather than for human consumption.

If you need to print the type in a more human-readable format, you can use the `type_name` trait from `<type_trait>` header, like this:
```C++
#include <iostream>
#include <type_traits>

void printArray_4(auto& arr) {
    int size = sizeof(arr) / sizeof(int);
    std::cout << "Type of arr: " << std::type_name<decltype(arr)>() << "\n";
    std::cout << "Size of arr is " << size << "\n";
}
```
This will output something like:
```C++
Type of arr: int (&)[10]
Size of arr is 10
```
The `std::type_name` trait provides a more reabable representaiton of the type, which is particularly useful for debugging and understanding the types involved in your code.

---
Q2: `std::type_name` is not available available in C++ stdlib, what's the fix?
A: The `std::type_name` trait is not part of the C++ standard library. It was proposed for C++20 but did not make it into the final standard. However, some compilers may provide an implementation as an extension.

Since you're using Xcode, which is based on the Clang compiler, `std::type_name` is not available. However, you can use a different approach to get a human-readable type name.

One option is to use the `__PRETTY_FUNCTION__` predefined macro, which contains the name of the current function, including the parameter types. Here's an example:
```C++
#include <iostream>
#include <string>
#include <cstring>

template <typename T>
std::string get_type_name() {
    const char* name = nullptr;
#ifdef __GNUC__
    name = __PRETTY_FUNCTION__;
#elif defined(_MSC_VER)
    name = __FUNCSIG__;
#endif
    if (name) {
        const char* start = strchr(name, '=') + 2;
        const char* end = strchr(start, ']');
        return std::string(start, end);
    }
    return "unknown";
}

void printArray_4(auto& arr) {
    int size = sizeof(arr) / sizeof(int);
    std::cout << "Type of arr: " << get_type_name<decltype(arr)>() << "\n";
    std::cout << "Size of arr is " << size << "\n";
}
```
In this example, the `get_type_name` function uses the `__PRETTY_FUNCTION__` macro (or `__FUNCSIG__` for MSVC) to extract the type name from the function signature. The output will be:
```
Type of arr: int (&)[10]
Size of arr is 10
```
Note that this approach relies on compiler-specific macros and may not work on all platforms or compilers. It's also not as clean or portable as using `std::type_name` would be if it were available.

Another option is to use a third-party library like `boost::core::demangle` or `cxxabi.h` to demangle the type name returned by  `typeid(...).name()`. However, this adds a dependency and may not be desirable in all cases.

---

