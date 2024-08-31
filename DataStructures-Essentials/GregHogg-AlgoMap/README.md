# Doubts and Explanations
Q1: In the code snippet below
```C++
#include <iostream>
#include <climits>
#include <vector>
using std::cout;
using std::vector;
using std::getline;
using std::string;
using std::max;
using std::min;
using std::cin;

int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
int init = [] {
    cin.tie(nullptr)->sync_with_stdio(false);
    freopen("user.out", "w", stdout);

    for (string s; getline(cin, s);) {
        int solution = 0, minPrice = INT_MAX;
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            int price = s[_i++] & 15;
            while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
            minPrice = min(minPrice, price);
            solution = max(solution, price - minPrice);
        }
    cout << solution << '\n';    }
    return 0;
}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i: prices){
            if(i < minPrice){
                minPrice = i;
            }
            int profit = i - minPrice;
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
```
what's the purpose of the following two functions?
```C++
int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
int init = [] {
    cin.tie(nullptr)->sync_with_stdio(false);
    freopen("user.out", "w", stdout);

    for (string s; getline(cin, s);) {
        int solution = 0, minPrice = INT_MAX;
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            int price = s[_i++] & 15;
            while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
            minPrice = min(minPrice, price);
            solution = max(solution, price - minPrice);
        }
    cout << solution << '\n';    }
    return 0;
}();
```

A: The code section you are referring to includes two anonymous lambda functions, `speedUp` and `init`, that are immediately invoked and executed. Let me break down their purposes:

## `int speedUp = [] {...}();`
This lambda function is responsible for optimizing the input and output operations in the program.
Here's what it does:
1. `std::ios::sync_with_stdio(0);`: This disables the synchronization between the C++ standard streams (`cin`, `cout`, etc.) and their C counterparts (`stdin`, `stdout`, etc.). Disabling this synchronization makes input and output operations faster because it allows C++ streams to operate independently of C streams.
2. `std::cin.tie(0);`: This function unties `cin` from `cout`. By default, `cin` is tied to `cout`, meaning `cout` is automatically flushed before `cin` performs an input operation. Untying them avoids this overhead, which can be beneficial for performance when many input/output operations are performed.
3. `return 0l`: The lambda function returns 0, which is assigned to the variable `speedUp`. The variabel itself is unused, and the lambda is invoked for its side effects (i.e., optimizing I/O performance).

## `int init = [] {...}();`
This lambda function performs several initialization tasks and processes input data. Here's what it does:
1. `cin.tie(nullptr)->sync_with_stdio(false);`: Similar to the previous lambda, this unties `cin` from `cout` and disables synchronization between C++ and C I/O streams. This is done again for performance reasons.
2. `freopen("user.out", "w", stdout);`: This redirects the standard output (`stdout`) to a file named `user.out`. Instead of writing output to the console, the program writes it to this file.
3. `for (string s; getline(cin, s);)`: This loop reads input lines from `cin` until the end of input. For each line read, it processes the line to find the maximum profit that can be obtained by buying and selling at certain prices.
    - `int price = s[_i++] & 15;`: This extracts the price from the string `s`. The operation `s[_i++] & 15` extracts the numerical value of the character.
    - `while((s[_i] & 15) < 10)`: This loop continues to extract digits from the string and builds up the full price value.
    - `minPrice = min(minPrice, price);`: This updates the minimum price encountered so far.
    - `solution = max(solution, price - minPrice);` This calculates the maximum profit that can be achieved based on the current price and the minimum price seen so far.
4. `cout << solution << '\n';`: After processing each line, the computed maximum profit (`solution`) is output to `user.out`.
5. `return 0;`: Like the `speedUp` lambda, the `init` lambda returns 0, which is assigned to the variable `init`. The variable itself is unused, and the lambda is invoked for its side effects (i.e., processing the input and writing the results to the file). 

## Summary
- The `speedUp` lambda is focused on optimizing input/output operations.
- The `init` lambda is focused on redirecting output to a file and processing input data to calculate and store the maximum profit for a series of prices.

These lambdas are used as a way to encapsulate and immediately execute initialization logic in a way that keeps the main code cleaner and more focused on the problem-solving aspect.
