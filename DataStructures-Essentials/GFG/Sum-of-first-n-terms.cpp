#include <iostream>
using std::cout;
using std::cin;

class Solution {
  public:
    long long sum = 1;
    long long sumOfSeries(long long n) {
        if(n==1)return sum;
        else{
            sum+=(n*n*n);
            return sumOfSeries(--n);
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
