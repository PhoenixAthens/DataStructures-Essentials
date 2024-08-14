# Notes and Explanations
Checkout: https://www.udemy.com/course/datastructurescncpp/learn/lecture/13123796#overview
Q1: when we talk about word size in computer architecture, does that mean that every block of memory will be 64 bits or does that mean that every block will have a 64-bit address?

A: In computer architecture, the term "word size" refers to the number of bits that the processor can process at once. This is typically the width of the processor's data bus. So, if we say a computer has a word size of 64 bits, it means that the processor can handle 64 bits of data in a single operation.

However, word size does not directly determine the size of each memory block or the size of memory addresses. Here's a brief explanation:

- **Memory Block Size**: The size of a memory block is not necessarily the same as the word size. It can vary depending on the memory organization of the system. For instance, in a cache memory system, the block size (also called line size) could be a few words (like 4 words of 64 bits each, making the block size 256 bits).

- **Memory Address Size**: The size of a memory address (i.e., the number of bits in an address) is determined by the addressing capability of the processor, not the word size. A 64-bit processor typically has a 64-bit address bus, which means it can address 2^64 individual bytes of memory. This is separate from the word size, although in many modern systems, the word size and address size are the same.

In summary, while the word size, memory block size, and address size are all important aspects of a computer's architecture, they serve different purposes and are not necessarily the same. They can be the same in some systems, but this is not a rule. Each is determined by different factors based on the design and requirements of the system. 

---
Q2: What's wrong with this code
```c++
void printArray_2(int** arr, int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<"\n";
    }
}
```
why can't I call this from the main function like so
```c++
int a2[3][4] = {{1,2,3},{1,2},{1}};
printArray_2(a2, 3, 4);
```
A: The issue with the provided code lies in the way the 2D array is passed to the `printArray_2` function.

In C++, when you pass a 2D array to a function, it decays into a pointer to the first element of the first row. Therefore, the function parameter should be a double pointer (`int**`) to handle this correctly.

However, the way you're trying to pass the 2D array `a2` to the `printArray_2` function is incorrect. The line `printArray_2(a2, 3, 4);` is not valid because `a2` is already a pointer to the first element of the first row, so it should be passed as a single pointer (`int*`).

Here's the corrected version of the `printArray_2` function and the way to call it from the `main` function:
```c++
void printArray_2(int* arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << *(arr + i * columns + j) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int a2[3][4] = {{1, 2, 3, 4}, {1, 2}, {1}};
    printArray_2(*a2, 3, 4); // Pass the address of the first element
    // 1 2 3 4 
    // 1 2 0 0 
    // 1 0 0 0 
    return 0;
}
```
In the corrected code:
1. The `printArray_2` function takes a single pointer `int* arr` as the first argument, which represents the address of the first element of the 2D array.
2. Inside the `printArray_2` function, we use the formula `*(arr + i * columns + j)` to access teh elements of the 2D array. This formula calculates the correct offset based on the row and column indices.
3. In the `main` function, we pass `*a2` to the `printArray_2` function, which is the address of the first element of the 2D array `a2`.

With these changes, the code should work as expected and print the elements of the 2D array correctly.

---
Q3: is there a way to pass a 2D array to a function like so `void printArray_2(int** arr, int rows, int columns)`?

A: Yes, it is possible to pass a 2D array to a function using a double pointer (`int**`) as the parameter. However, you need to be careful when accessing the elements of the 2D array within the function.

Here's an example of how you can pass a 2D array to a function using a double pointer:
```c++
void printArray_2(int** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int a2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printArray_2(reinterpret_cast<int**>(a2), 3, 4);
    return 0;
}
```
In this example:
1. The `printArray_2` function takes a double pointer `int** arr` as the first argument, which represents the 2D array.
2. Inside the `printArray_2` function, we can access the elements of the 2D array using the double pointer notation `arr[i][j]`.
3. In the `main` function, we pass the address of the 2D array `a2` to the `printArray_2` function using `reinterpret_cast<int**>(a2)`. This is necessary because a 2D array is not a double pointer by default, and we need to explicitly cast it to `int**`.

The output of this code will be:
```
1 2 3 4 
5 6 7 8 
9 10 11 12
```
It's important to note that using `reinterpret_cast` is generally not recommended unless you have a good understanding of the underlying memory layout and potential risks. In this case, it's used to pass the 2D array to the function, but it's not a recommended practice for general programming.

An alternative approach, which is safer and more idiomatic in C++, is to use a single pointer and caculate the offsets manually, as shown in the previous example:
```c++
void printArray_2(int* arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << *(arr + i * columns + j) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int a2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printArray_2(*a2, 3, 4);
    return 0;
}
```
This approach is more explicit, safer, and easier to understand, as it avoids the need for casting and directly works with the memory layout of the 2D array.

---
Q4: In the following code
```c++
void printArray_2(int** arr, int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<"\n";
    }
}
```
what's wrong with `*(*(arr+i)+j)`?

A: There is nothing inherently wrong with the expression `*(*(arr+i))` in the provided code. It is a valid way to access the elements of a 2D array when it is passed as a double pointer (`int**`) to the function.

Here's how the expression `*(*(arr+i)+j)` works:
1. `arr` is a double pointer (`int**`) that points to the first row of the 2D array.
2. `arr+i` calculates the address of the `i-th` row of the 2D array.
3. `*(arr+i)` dereferences the address of the `i-th` row, giving you a pointer to the first element of that row.
4. `*(*(arr+i))` dereferences the pointer to the first element of the `i-th` row giving you the actual value of the first element.
5. `*(arr+i)+j` adds `j` to the address of the first element of the `i-th` row, effectively moving the pointer `j` elements forward.
6. `*(*(arr+i)+j)` dereferences the pointer that points to the `j-th` element of the `i-th` row, giving you the actual value of that element.

So, the expression `*(*(arr+i)+j)` correctly accesses the element of the `i-th` row and `j-th` column of the 2D array.

However, while this expression is valid, it can be considered less readable and more error-prone than the more idiomatic way of accessing 2D array elements using the `arr[i][j]` notation.

For example, the following code is more readable and easier to understand:
```c++
void printArray_2(int** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
```
In this version, `arr[i][j]` directly accesses the element at the `i-th` row and the `j-th` column of the 2D array, which is more intuitive and less prone to potential mistakes.

While this expression `*(*(arr+i)+j)` is correct and works as intended, it's generally recommended to use the more readable and idiomatic notation `arr[i][j]` when working with 2D arrays in C++, unless there is a specific reason to use pointer arithmetic.

---
Q5: Why am I getting `bad memory access` at `*(*(arr+i)+j)` in the following code
```C++
 void printArray_2(int** arr, int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(arr+i)+j)<<" ";
        }
        cout<<"\n";
    }
}
```
when called like so
```c++
int a2[3][4] = {{1,2,3,4},{1,2},{1}};
printArray_2(reinterpret_cast<int**>(a2),3,4);
```
from `main`?

A: The issue you are facing is due to the way you're passing the 2D array `a2` to the `printArray_2` function. When you use `reinterpret_cast<int**>(a2)`, you're casting the 2D array to a double pointer (`int**`), but the memory layout of the 2D array is not guaranteed to be compatible with the way you're accessing it using pointer arithmetic.

In C++, a 2D array is not a true double pointer. It's an array of arrays, and the memory layout can be different depending on the compiler and platform. Therefore, using `reinterpret_cast` to treat it as a double pointer can lead to undefined behavior and memory access violations.

To fix this issue, you should pass the 2D array as a single pointer (`int*`) and calculate the offsets manually. Here's the corrected code:
```C++
void printArray_2(int* arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << *(arr + i * columns + j) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int a2[3][4] = {{1, 2, 3, 4}, {1, 2}, {1}};
    printArray_2(*a2, 3, 4);
    return 0;
}
```

---
Q6: How does this formula `*(arr + i * columns + j)` work?

A: The formula `*(arr + i * columns + j)` is used to access the element at the `i-th` row and `j-th` column of the 2D array that is passed as a single pointer (`int*`) to a function.

Here's how it works:
1. `arr` is a pointer to the first element of the 2D array.
2. `i * columns` calculates the offset from the beginning of the array to the start of the `i-th` row. Since each row has `columns` elements, and the elements are stored contiguously in memory, the offset to the start of the `i-th` row is `i * columns`.
3. `arr + i * columns` gives you the address of the first element of the `i-th` row.
4. `j` is added to the address of the first element of the `i-th` row to get the address of the `j-th` element in that row.
5. `*(arr + i * columns +j)` dereferences the address calculated in step 4, giving you the actual value of the element of the `i-th` row and `j-th` column of the 2D array.
To better understand this, let's consider an example:

Suppose we have a 2D array `arr` with 3 rows and 4 columns, and we want to access the element at the 2nd row (index 1) and 3rd column (index 2). The memory layout of this 2D array would be:
```
arr[0][0] arr[0][1] arr[0][2] arr[0][3] arr[1][0] arr[1][1] arr[1][2] arr[1][3] arr[2][0] arr[2][1] arr[2][2] arr[2][3]
```
To access the element `arr[1][2]`, we need to calculate teh offset from the beginning of the array to the start of the 2nd row (`1 * 4 = 4`), and then add the offset to the 3rd element in that row (`4 + 2 = 6`).

So `*(arr + 1 * 4 + 2)` will give us the value of `arr[1][2]`.

This formula works because, in memory, a 2D array is stored as a contiguous block of memory, with each row following the previous one. By calculating the offset to the start of the desired row and then adding the offset to the desired column within that row, we can access any element in the 2D array using a single pointer.

It's important to note that this approach assumes that the 2D array is stored in row-major order, which is the default in C++. If the array is stored in column-major order (which is less common), the formula would need to be adjusted accordingly.


