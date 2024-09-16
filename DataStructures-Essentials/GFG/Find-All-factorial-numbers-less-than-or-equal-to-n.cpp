#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::endl;

class Solution {
  public:
    vector<long long> vecR{1,2};
    int start{3};
    vector<long long> factorialNumbers(long long n) {
        if(*(vecR.end()-1)>=n){
            if(*(vecR.end()-1)>n){
                vecR.pop_back();
            }
            return vecR;
        }
        long long result=1;
        factorial(start++, result);
        return factorialNumbers(n);
    }
    void factorial(long long n, long long& result){
        if(n==vecR.size()){
            result*= *(vecR.end()-1);
            vecR.push_back(result);
            return;
        }
        result*=n;
        factorial(--n, result);
    }
        
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
