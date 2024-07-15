#  Doubts and Explanations
Q1: What's the purpose and use case of the `unistd.h` header file?

A: The `unistd.h` header file is a POSIX (Portable Operating System Interface) header file that provides access to various POSIX operating system APIs and utilities. It is primarily used in Unix-like operating systems, such as Linux and macOS, as well as other POSIX-compliant systems.

The `unistd.h` header file declares several standard symbolic constants and data types, as well as function prototypes for various system calls and utility functions related to the operating system. Some of the common functions and features provided by `unistd.h` include:
1. **Process Control:** Functions like `fork()`, `exec()`, `getpid()`, `getppid()`, and `exit()` for creating, executing, and managing processes.
2. **File and Directory Operations**: Functions like `chdir()`, `getcwd()`, `access()`, `unlink()`, `rmdir()`, and `link()` for working with files and directories.
3. **User and Group IDs**: Functions like `getuid()` `geteuid()`, `getgid()`, and `getegid()` for retrieving user and group identifiers.
4. **Symbolic and Hard Links**: Functions like `symlink()` and `readlink()` for creating and reading symbolic links.
5. **Standard Input/Output**: Functions like `read()`, `write()`, `pipe()`, `dup()`, and `dup2()` for low level input/output operations.
6. **Process Scheduling Priorities**: Functions like `nice()` for adjusting process scheduling priorities.
7. **Miscellaneous Utilities**: Functions like `sleep()`, `unsleep()`, `pause()`, `alarm()`, and `sync()` for various utility operations.

The `unistd.h` header file is typically included in C programs that need to interact with the operating system or perform low-level system operations. It provides a standardized interface for these operations, allowing for better portability of code across different POSIX-compliant systems.

It's important to note that while `unistd.h` is a POSIX standard header file, its availability and the specific functions it provides may vary slightly across different operating system and implementations. Some functions may be specific to certain Unix-like systems or may have different behaviors or limitations on different platforms.

Q2: In the following code 
```c
#include <stdio.h>
struct Rectangle{
    int length;
    int breadth;
    char category;
};
int main(int argc, char** argv){
    struct Rectangle r1={23,45,'A'};
    printf("Length: %i\n",r1.length); //Length: 23
    printf("Breadth: %i\n",r1.breadth); //Breadth: 45
    printf("Category: %i\n",r1.category); //Category: 65
    printf("Size of Struct: %lu\n",sizeof(r1)); //Size of Struct: 12
    return 0;
}
```
why is the `sizeof` operator returning `12` rather than `9` for the structure?

A: The size of the `Rectangle` struct in your code is 12 bytes because of the way structures are padded in memory by the compiler.

In your `Rectangle` struct, you have the following members:
```c
struct Rectangle{
    int length;    // 4 bytes
    int breadth;   // 4 bytes
    char category; // 1 byte
};
```
The total size of these members is 4 + 4 + 1 = 9 bytes. However, the compiler adds padding bytes to ensure that each member is properly aligned in memory for efficient access.

Most modern systems are designed to access memory chunks of 4 bytes (32-bites) or 8 bytes (64-bits). To ensure efficient memory access, the compiler aligns the members of a struct on their natural alignment boundaries, which are typically the same as their size.

In your case, the compiler aligns the `int` members (`length` and `breadth`) on 4-byte boundaries, and the `char` member (`category`) on a 1-byte boundary. However, after the `breadth` member, there is a padding of 3-bytes to ensure that the `category` member is aligned on a 4-byte boundary.

So, the memory layout of your `Rectangle` struct looks like this:
```
+---------------+
| length (4 bytes) |
+---------------+
| breadth (4 bytes) |
+---------------+
| padding (3 bytes) |
+---------------+
| category (1 byte) |
+---------------+
```
The total size of the struct, including the padding bytes is 4 + 4 + 3 + 1 = 12 bytes.

This padding is added by the compiler to ensure efficient memory access and alignment, but it also means that the size of the struct is larger than the sum of its members' sizes.

If you want to avoid this padding and reduce the size of the struct, you can rearrange the members in a speific order, known as the "Struct Padding Technique." For example, if you place the `char` member first, followed by the `int` members, the compiler may not need to add any padding:
```c
struct Rectangle {
    char category;  // 1 byte
    int length;     // 4 bytes
    int breadth;    // 4 bytes
};
```
In this case, the size of the `Rectangle` struct would be 1 + 4 + 4 = 9 bytes, without any padding.

However, keep in mind that rearranging struct members can affect performance, as it may introduce additional memory access overhead due to potential misalignment of the larger members. It's generally recommended to prioritize performance over size optimization unless you have specific memory constraints.

---
Operator Precedence highest to lowest in C

---------------------------------------------------------------------
| Category       | Operator  |  Associativity                       |
---------------------------------------------------------------------
| Postfix        | `() [] -> . ++ --`               | Left to right |
---------------------------------------------------------------------
| Unary          | `+ - ! ~ ++ -- (type)* & sizeof` | Right to left |
---------------------------------------------------------------------
| Multiplicative | `* / %`                          | Left to right | 
---------------------------------------------------------------------
| Additive       | ` + - `                          | Left to right | 
---------------------------------------------------------------------
| Shift          | `<<   >>`                        | Left to right | 
---------------------------------------------------------------------
| Relational     | `<  <= > >=`                     | Left to right | 
---------------------------------------------------------------------
| Equality       | ` == !=`                         | Left to right | 
---------------------------------------------------------------------

----
Q3: What will be the output of the following code
```c
#include <stdio.h>
int main(){
    int i = 0;
    int j = i++ + i;
    printf("%d\n",j);
}
```
A: 1

---
Q4: What will be the output of the following code
```c
#include <stdio.h>
void main(){
    int x = 1, y = 0, z = 5;
    int a = x && y || z++;
    printf("%d",z);
}
```

A: 6

----
Q5: What will be the output of the following code?
```c
#include <stdio.h>
void main(){
    int x = 1, y = 0, z = 5;
    int a = x && y && z++;
    printf("%d",z);
}
```
A: 5
**WHY?**
**BECAUSE:** In the above `x && y` evaluates to `false` and since there is `&&` `z++` never gets executed. This is referred as short-circuit evaluation where the second boolean evaluation never gets evaluated because it does not need to because the first is `false` (in an `&&` expression).

----
Q6: What will be the output of the following C code consisting the size of a `short int` is 2, `char` is 1, and `int` is 4 bytes ?
```c
#include <stdio.h>
int main(){
    short int i = 20;
    char c = 97;
    printf("%d, %d, %d\n", sizeof(i), sizeof(c), sizeof(c + i));
    return 0;
}
```
A: 2, 1, 4 

---
Q7: What will be the data type of the result of the following operation?
```c
(float)a * (int)b / (long)c * (double)d
```
A: double

---











