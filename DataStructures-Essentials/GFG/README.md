# Doubts and Explanations
Q1: Why does the following code 
```C++
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class Solution{
public:
    int evenlyDivides(int N){
        vector<int> nums;
        int N_copy = N;
        while(N_copy!=0){
            nums.push_back(N_copy%10);
            N_copy = (int)N/10;
        }
        
        int count{0};
        for(int i: nums){
            if(N%i==0)count++;
        }
        return count;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
```
throw a `Floating-Point Exception` when processing `22074` and how does making the following changes solve that?
```C++
    int count{0};
    for(int i: nums){
        // Skip division if the digit is zero
        if(i != 0 && N % i == 0) count++;
    }
    return count;
```

A: The reason why `N % i` where `i = 0` results in a "Floating-Point Exception" is because division (including modulus) by zero is undefined in mathematics, and in most programming languages, including C++, it leads to a runtime error.

### Explanation
1. *Division by zero is undefined*: When you attempt to divide by zero, there is no meaningful result in mathematics. So most programming languages, including C++, handle this by raising an exception (or sometimes a crash) to indicate that something went wrong.
2. *`%` operator is a form of division*: The modulus operator (`%`) computes the remainder of a division. For example, `N % i` is the remainder when `N` is divided by `i`. If `i` is zero, you're essentially asking the computer to divide by zero, which it cannot do.
3. *Floating Point Exception*: In C++, when you attempt a division by zero, the system throws a hardware exception. This is referred to as a `Floating Point Exception`, when if no actual floating-point number are involved (it can also happend with integers). This is just a historic term stemming form older hardware architectures where division by zero was classified as a floating-point error.

### In your case:
When you extract digits from `N`, there may be some errors. If you do not check for this and try to compute `N%i` when `i=0`, you are effectively trying to divide by zero, which raises the exception. Hence, the fix is to ensure that you skip the digit `0` before performing `N % i` to avoid the error:
```C++
if(i != 0 && N % i == 0)
```
This check ensures that `i` is not zero before performing the modulus operation, preventing the `Floating Point Exception`.

----

