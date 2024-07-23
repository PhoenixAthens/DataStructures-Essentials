# Doubts and Explanations
Let's explore the Solution to Leetcode Problem 2, "Add Two Numbers".
The following code take 33ms to pass all test cases
```C++
#include <iostream>
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x):val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = l1->val+l2->val;
        ListNode* ln = new ListNode(sum%10);
        ListNode* inUse = &(*ln);
        l1=l1->next;
        l2=l2->next;
        carry=sum/10;
        while(l1!=nullptr || l2!=nullptr){
            inUse->next = new ListNode();
            inUse = inUse->next;
            int temp = 0;
            if(l1!=nullptr){
                temp+=l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                temp+=l2->val;
                l2 = l2->next;
            }
            temp+=carry;
            carry = temp/10;
            inUse->val = temp%10;
        }
        if(carry!=0){
            inUse->next=new ListNode(carry);
        }
        return ln;
    }
};
```
while the code below takes 3ms to pass all test cases
```C++
static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();

inline bool isDigit(const char c) {
    return (c >= '0') && (c <= '9');
}

void parse_and_solve(const std::string& s1, const std::string& s2, std::ofstream& out) {
    const int S1 = s1.size();
    const int S2 = s2.size();
    if (S1 < S2) {
        parse_and_solve(s2, s1, out);
        return;
    }
    int carry = 0;
    int i = 0;
    int j = 0;
    while (i < S1 - 1) {
        while (i < S1 && (!isDigit(s1[i]))) { ++i; }
        while (j < S2 && (!isDigit(s2[j]))) { ++j; }
        const int n1 = s1[i] - '0';
        const int n2 = (j < S2) ? (s2[j] - '0') : 0;
        const int n = carry + n1 + n2;
        carry = n / 10;
        out << (n % 10);
        if (i < S1 - 2) {
            out << ",";
        }
        ++i;
        ++j;
    }
    if (carry > 0) {
        out << "," << carry;
    }
}

static bool Solve = [](){
    std::ofstream out("user.out");
    std::string s1, s2;
    while (std::getline(std::cin, s1) && std::getline(std::cin, s2)) {
        out << "[";
        parse_and_solve(s1, s2, out);
        out << "]\n";
    }
    out.flush();
    exit(0);
    return true;
}();
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = l1->val+l2->val;
        ListNode* ln = new ListNode(sum%10);
        ListNode* inUse = &(*ln);
        l1=l1->next;
        l2=l2->next;
        carry=sum/10;
        while(l1!=nullptr || l2!=nullptr){
            inUse->next = new ListNode();
            inUse = inUse->next;
            int temp = 0;
            if(l1!=nullptr){
                temp+=l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                temp+=l2->val;
                l2 = l2->next;
            }
            temp+=carry;
            carry = temp/10;
            inUse->val = temp%10;
        }
        if(carry!=0){
            inUse->next=new ListNode(carry);
        }
        return ln;
    }
};
```
So what are these extra function doing that results in the better performance?

A: The code seems to be a combination of two different things: a C++ program that reads two strings from input and performs some airthmetic operations on them, and a C++ solution to the "Add Two Numbers" problem on LeetCode.

Let's break down the functions you asked about:
1. `Booster`: This is a lambda function that is executed at the start of the program. It is used to disable synchronization between C++ and C I/O streams, which can improve performance by reducing overhead. The `std::ios_base::sync_with_stdio(false)` line disables synchronization, and the `std::cout.tie(nullptr)` and `std::cin.tie(nullptr)` lines untie the `cout` and `cin` streams from their respective output and input buffers.
2. `isDigit`: This is a simple inline function that checks if a given character is a digit (between '0' and '9'). It is used in the `parse_and_solve` function to skip non-digit characters in the input strings.
3. `parse_and_solve`: This function takes two input strings (`s1` and `s2`) and an output stream (`out`). It performs arithmetic addition on the two strings, treating them as large numbers represented by characters. The function skips non-digit characters and performs the addition digit by digit, handling carries appropriately. The result is written to the output stream in a specific format (e.g., 1, 2, 3).
4. `Solve`: This is another lambda function that is executed at the start of the program. It opens an output file (`user.out`), reads two strings from `std::cin` in a loop, calls `parse_and_solve` on those strings, and writes the result to the output file. After processing all input, it flushes the output stream and exits the program.

These functions are not directly related to the LeetCode problem solution (`addTwoNumbers`) that follows in the code snippet. The LeetCode solution is a separate implementation that adds two numbers represented as linked list.

Regarding the performance improvement, the `Booster` function is likely the main contributor. By disabling synchronization between C++ and C I/O streams, it can significantly reduce the overhead associated with input/output operations, especially when dealing with large amounts of data. This optimization is particularly effective for competitive programming problems, where input/output performance is crucial.

The `isDigit` function is a simplet helper function that likely has minimal impact on performance, but it helps keep the code clean and readable.

The `parse_and_solve` function is an optimized implementation for adding large numbers represented as strings. By skipping non-digit characters and performing the addition digit by digit, it avoids the need for expensive arithmetic operations on large integers, which can be slow for very large numbers.

Overall, the combination of these optimizations can significantly improve the performance of the program, especially when dealing with large inputs or performing arithmetic operations on large numbers.

----

