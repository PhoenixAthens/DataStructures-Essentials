#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::endl;

class Solution {
    
  private:
    inline long long maxMe(long long A, long long B){
        return A>B?A:B;
    }
    inline long long minMe(long long A, long long B){
        return A<B?A:B;
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> lg{};
        long long big = maxMe(A,B);
        long long small = minMe(A,B);
        while(small!=0){
            long long mod = big%small;
            big = small;
            small = mod;
        }
        lg.push_back((A/big)*B);
        lg.push_back(big);
        
        return lg;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
