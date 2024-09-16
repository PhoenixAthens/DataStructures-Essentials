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

Q2: Using Harmonic lemma to solve `Sum of all divisors from 1 to n`

A: Yes, the Harmonix Lemma (or Harmonic number approximation) can help in efficiently solving this problem related to the sum of divisors. Here's how we can use it:

The naive approach would be to compute the sum of divisors for each number `i` from `1` to `n`, which involves iterating through all possible divisors for each number. However, this approach has a time complexity of O(n^2) in the worst case.

Using the Harmonic Lemma, we can reduce the complexity by observing that the sum of divisors of all numbers from `1` to `n` can be computed more efficiently. The idea is that each number `d` contributes to the divisors of multiples of `d`.

## Explanation:
1. *Divisors Contribution*: The divisor `d` contributes to the sum of divisors of all multiples of `d` up to `n`. For example, the number `2` is a divisor of `2, 4, 6, 8, ...` up to `n`. Therefore, it contributes `2` to each of these numbers.
2. *Harmonic Series Approximation*: The sum of divisors can be broken down based on the fact that for every number `d`, it contributes `d` to the multiples of `d`. The number of multiples of `d` up to `n` is approximately `n/d`. Therefore, instead of calculating the divisors for each number individually, we can sum contributions of divisors over their multiples.

## Steps:
1. Initialize a variable `sumDiv` to store teh total sum.
2. For each divisor `d` from `1` to `n`, calculate how many numbers are divisible by `d` (this is `n//d`).
3. Multiply `d` by `n//d` to get the total contribution of `d` to the sum of divisors of all numbers up to `n`.
4. Add this contribution to `sumDiv`.

```C++
int sumOfDivisors(int n) {
    int sumDiv = 0;
    for (int d = 1; d <= n; ++d) {
        sumDiv += d * (n / d);
    }
    return sumDiv;
}
```

## Time Complexity:
This approach works in `O(n log n)` due to the summing of divisors over their multiples. The use of harmonic series approximation ensures that the number of operations grows much slower than the naive method.

---


